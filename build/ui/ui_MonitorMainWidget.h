/********************************************************************************
** Form generated from reading UI file 'MonitorMainWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORMAINWIDGET_H
#define UI_MONITORMAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonitorMainWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;

    void setupUi(QWidget *MonitorMainWidget)
    {
        if (MonitorMainWidget->objectName().isEmpty())
            MonitorMainWidget->setObjectName("MonitorMainWidget");
        MonitorMainWidget->resize(1172, 733);
        gridLayout = new QGridLayout(MonitorMainWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MonitorMainWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(MonitorMainWidget);

        QMetaObject::connectSlotsByName(MonitorMainWidget);
    } // setupUi

    void retranslateUi(QWidget *MonitorMainWidget)
    {
        MonitorMainWidget->setWindowTitle(QCoreApplication::translate("MonitorMainWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonitorMainWidget: public Ui_MonitorMainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORMAINWIDGET_H
