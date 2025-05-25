/********************************************************************************
** Form generated from reading UI file 'MainWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MainWidgetBtnGroup.h"
#include "MainWidgetTitle.h"
#include "MonitorMainWidget.h"
#include "VideoMainWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    MainWidgetTitle *widget_title;
    QHBoxLayout *horizontalLayout;
    MainWidgetBtnGroup *widget_btnGroup;
    QStackedWidget *stackedWidget_body;
    MonitorMainWidget *page_monitorWidgwt;
    VideoMainWidget *page_videoWidget;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1280, 720);
        MainWidget->setMinimumSize(QSize(1280, 720));
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MainWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_title = new MainWidgetTitle(widget);
        widget_title->setObjectName("widget_title");

        verticalLayout->addWidget(widget_title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName("horizontalLayout");
        widget_btnGroup = new MainWidgetBtnGroup(widget);
        widget_btnGroup->setObjectName("widget_btnGroup");
        widget_btnGroup->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(widget_btnGroup);

        stackedWidget_body = new QStackedWidget(widget);
        stackedWidget_body->setObjectName("stackedWidget_body");
        page_monitorWidgwt = new MonitorMainWidget();
        page_monitorWidgwt->setObjectName("page_monitorWidgwt");
        stackedWidget_body->addWidget(page_monitorWidgwt);
        page_videoWidget = new VideoMainWidget();
        page_videoWidget->setObjectName("page_videoWidget");
        stackedWidget_body->addWidget(page_videoWidget);

        horizontalLayout->addWidget(stackedWidget_body);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
