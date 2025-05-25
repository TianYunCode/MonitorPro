#include "MainWidget.h"
#include "ui_MainWidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
    , isDragging(false)
    , lastMousePos(QPoint(0, 0))
{
    ui->setupUi(this);
    initUI();

    //接收并处理标题栏按钮发出的所有信号
    connect(ui->widget_title, &MainWidgetTitle::signalButtonClicked, this, &MainWidget::onButtonClicked);

    //接收并处理标题栏自定义事件信号
    connect(ui->widget_title, &MainWidgetTitle::signalCustomizeEvent, this, &MainWidget::onCustomizeEvent);

    //接受并处理左侧栏按钮发出的所有信号
    connect(ui->widget_btnGroup, &MainWidgetBtnGroup::signalSwitchWindow, this, &MainWidget::onSwitchWindow);
}

MainWidget::~MainWidget()
{
    qDebug()<<"MainWidget::~MainWidget()";
    delete ui;
}

void MainWidget::initUI()
{
    // 设置窗口无边框和无标题栏
    setWindowFlags(Qt::FramelessWindowHint);

    //设置默认窗口
    ui->stackedWidget_body->setCurrentWidget(ui->page_monitorWidgwt);

    //设置ui->stackedWidget_body各个页面的属性
    ui->page_monitorWidgwt->setProperty("ID",PAGE_MONITORWIDGET);
    ui->page_videoWidget->setProperty("ID",PAGE_VIDEOWIDGET);
}

void MainWidget::mousePressEvent(QMouseEvent *event)
{
    if ((event->button() == Qt::LeftButton)  && !this->isMaximized())
    {
        // 获取鼠标点击位置相对于当前窗口的位置
        QPoint clickPos = event->pos();
        // 判断点击位置是否在标题栏区域内
        if (ui->widget_title->geometry().contains(clickPos))
        {
            isDragging = true;
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
            lastMousePos = event->globalPos();  //QT5 方式
#else
            lastMousePos = event->globalPosition().toPoint();   //QT6 方式
#endif
        }
    }
}

void MainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (isDragging && !this->isMaximized())
    {

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
        // 计算窗口新位置
        QPoint newPos = pos() + (event->globalPos() - lastMousePos);    //QT5 方式
#else
        // 计算窗口新位置
        QPoint newPos = pos() + (event->globalPosition().toPoint() - lastMousePos); //QT6 方式
#endif
        move(newPos);
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
        lastMousePos = event->globalPos();  //QT5 方式
#else
        lastMousePos = event->globalPosition().toPoint();   //QT6 方式
#endif
    }
}

void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if ((event->button() == Qt::LeftButton)  && !this->isMaximized())
    {
        isDragging = false;
    }
}

//窗口最小化
void MainWidget::minimizeWindow()
{
    this->showMinimized();
}

//窗口放大或恢复
void MainWidget::zoomWindow()
{
    if (this->isMaximized())
    {
        this->showNormal();
    }
    else
    {
        this->showMaximized();
    }
}

//退出程序
void MainWidget::closeWindow()
{
    qApp->quit();
}

//切换到实时监控窗口
void MainWidget::switchPageMonitorWindow()
{
    ui->stackedWidget_body->setCurrentWidget(ui->page_monitorWidgwt);
}

//切换到视频回放窗口
void MainWidget::switchPageVideoWindow()
{
    ui->stackedWidget_body->setCurrentWidget(ui->page_videoWidget);
}

//处理标题栏按钮发出的所有信号
void MainWidget::onButtonClicked(int id)
{
    switch(id)
    {
    case PUSHBUTTON_MINIMIZE_ID:
        minimizeWindow();
        break;

    case PUSHBUTTON_ZOOM_ID:
        zoomWindow();
        break;

    case PUSHBUTTON_CLOSE_ID:
        closeWindow();
        break;

    default:
        break;
    }
}

void MainWidget::onCustomizeEvent(int id)
{
    switch(id)
    {
    case MAINWIDGET_TITLE_DOUBLE_CLICK_EVENT:
        zoomWindow();
        break;

    default:
        break;
    }
}

//处理按钮栏按钮发出的所有信号
void MainWidget::onSwitchWindow(int id)
{
    switch(id)
    {
    case PAGE_MONITORWIDGET:
        switchPageMonitorWindow();
        break;

    case PAGE_VIDEOWIDGET:
        switchPageVideoWindow();
        break;

    default:
        break;
    }
}
