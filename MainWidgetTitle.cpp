#include "MainWidgetTitle.h"
#include "ui_MainWidgetTitle.h"

MainWidgetTitle::MainWidgetTitle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidgetTitle)
    , m_isZoom(false)
{
    ui->setupUi(this);
    initUI();
}

MainWidgetTitle::~MainWidgetTitle()
{
    delete ui;
}

void MainWidgetTitle::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit signalCustomizeEvent(MAINWIDGET_TITLE_DOUBLE_CLICK_EVENT);
        changeZoomBtnIcon();
    }

    // 调用基类处理以确保事件正常传递
    QWidget::mouseDoubleClickEvent(event);
}

void MainWidgetTitle::initUI()
{
    //设置标题图标
    QPixmap pixmap(MAIN_WIDGET_TITLE_TITLE_APP_ICON_SVG);
    pixmap = pixmap.scaled(64,64,Qt::KeepAspectRatio,Qt::SmoothTransformation); // 对图标进行缩放（保持宽高比）
    ui->label_icon->setPixmap(pixmap);

    //设置标题字体
    QFont fontChinese;
    fontChinese.setPixelSize(24);
    fontChinese.setStyleStrategy(QFont::PreferAntialias);  // 启用抗锯齿
    ui->label_titleNameChinese->setText("智能安防监控系统");
    ui->label_titleNameChinese->setFont(fontChinese);

    QFont fontEnglish;
    fontEnglish.setPixelSize(11);
    fontEnglish.setStyleStrategy(QFont::PreferAntialias);  // 启用抗锯齿
    ui->label_titleNameEnglish->setText("Intelligent security monitoring system");
    ui->label_titleNameEnglish->setFont(fontEnglish);

    //初始化按钮
    ui->pushButton_minimize->setIcon(QIcon(MAIN_WIDGET_TITLE_MINIMIZE_APP_ICON_SVG));
    ui->pushButton_minimize->setIconSize(QSize(48,48));

    ui->pushButton_zoom->setIcon(QIcon(MAIN_WIDGET_TITLE_ZOOM_APP_ICON_SVG));
    ui->pushButton_zoom->setIconSize(QSize(48,48));

    ui->pushButton_close->setIcon(QIcon(MAIN_WIDGET_TITLE_QUIT_APP_ICON_SVG));
    ui->pushButton_close->setIconSize(QSize(48,48));

    // 设置按钮属性
    ui->pushButton_minimize->setProperty("ID", PUSHBUTTON_MINIMIZE_ID);
    ui->pushButton_zoom->setProperty("ID", PUSHBUTTON_ZOOM_ID);
    ui->pushButton_close->setProperty("ID", PUSHBUTTON_CLOSE_ID);

    // 使用Lambda表达式连接信号
    auto sendSignal = [this](QPushButton* btn){
        connect(btn, &QPushButton::clicked, [this, btn](){
            if(btn->property("ID").toInt()==PUSHBUTTON_ZOOM_ID) changeZoomBtnIcon();
            emit signalButtonClicked(btn->property("ID").toInt());
        });
    };

    // 遍历所有按钮
    QList<QPushButton*> buttons = findChildren<QPushButton*>();
    for(auto btn : buttons) sendSignal(btn);
}

void MainWidgetTitle::changeZoomBtnIcon()
{
    if(!m_isZoom)
    {
        ui->pushButton_zoom->setIcon(QIcon(MAIN_WIDGET_TITLE_UN_ZOOM_APP_ICON_SVG));
    }
    else
    {
        ui->pushButton_zoom->setIcon(QIcon(MAIN_WIDGET_TITLE_ZOOM_APP_ICON_SVG));
    }
    m_isZoom = !m_isZoom;
}
