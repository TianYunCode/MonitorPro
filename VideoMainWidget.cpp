#include "VideoMainWidget.h"
#include "ui_VideoMainWidget.h"

VideoMainWidget::VideoMainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VideoMainWidget)
{
    ui->setupUi(this);
}

VideoMainWidget::~VideoMainWidget()
{
    delete ui;
}
