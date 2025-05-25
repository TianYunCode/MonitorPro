#include "MainWidgetBtnGroup.h"
#include "ui_MainWidgetBtnGroup.h"

MainWidgetBtnGroup::MainWidgetBtnGroup(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidgetBtnGroup)
    , m_vLayout(nullptr)
    , m_timer(new QTimer(this))
    , m_MonitorBtn(nullptr)
    , m_VideoBtn(nullptr)
{
    ui->setupUi(this);

    // 启动定时器动态更新时间
    m_timer->start(1000); // 每秒触发一次

    initUI();
    initSignalsConnect();
}

MainWidgetBtnGroup::~MainWidgetBtnGroup()
{
    delete ui;
}

void MainWidgetBtnGroup::initUI()
{
    updateDateTime();

    //初始化成员
    m_vLayout = new QVBoxLayout(ui->widget_btnGroup);
    m_MonitorBtn = new CustomizeBtn();
    m_VideoBtn = new CustomizeBtn();

    //将自定义按钮控件添加到垂直布局里
    m_vLayout->addWidget(m_MonitorBtn);
    m_vLayout->addWidget(m_VideoBtn);
    m_vLayout->addStretch(1);

    //设置实时监控按钮图标和文字
    m_MonitorBtn->setIcon(MAIN_WIDGET_BTN_GROUP_MONITOR_ICON_SVG,64,64);
    m_MonitorBtn->setName("实时监控",14);
    m_MonitorBtn->setSize(80,80);

    //设置视频回放按钮图标和文字
    m_VideoBtn->setIcon(MAIN_WIDGET_BTN_GROUP_VIDEO_ICON_SVG,64,64);
    m_VideoBtn->setName("视频回放",14);
    m_VideoBtn->setSize(80,80);

    //设置实时监控按钮样式为点击状态
    m_MonitorBtn->setClickedStyle();
}

void MainWidgetBtnGroup::initSignalsConnect()
{
    //m_timer计时器每秒触发一次，更新日期和时间
    connect(m_timer, &QTimer::timeout, this, &MainWidgetBtnGroup::updateDateTime);

    //实时监控按钮被点击
    connect(m_MonitorBtn, &CustomizeBtn::signalClicked, this, [this]() {
        m_MonitorBtn->setClickedStyle();
        m_VideoBtn->setNormalStyle();
        emit signalSwitchWindow(PAGE_MONITORWIDGET);
    });

    //视频回放按钮被点击
    connect(m_VideoBtn, &CustomizeBtn::signalClicked, this, [this]() {
        m_VideoBtn->setClickedStyle();
        m_MonitorBtn->setNormalStyle();
        emit signalSwitchWindow(PAGE_VIDEOWIDGET);
    });
}

//更新日期和时间
void MainWidgetBtnGroup::updateDateTime()
{
    ui->label_date->setText(QDate::currentDate().toString("yyyy/MM/dd"));
    ui->label_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}
