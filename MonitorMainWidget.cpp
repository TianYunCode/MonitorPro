#include "MonitorMainWidget.h"
#include "ui_MonitorMainWidget.h"

MonitorMainWidget::MonitorMainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MonitorMainWidget)
{
    ui->setupUi(this);
}

MonitorMainWidget::~MonitorMainWidget()
{
    delete ui;
}

void MonitorMainWidget::initUI()
{

}
