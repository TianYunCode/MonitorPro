/********************************************************************************
** Form generated from reading UI file 'MainWidgetBtnGroup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGETBTNGROUP_H
#define UI_MAINWIDGETBTNGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidgetBtnGroup
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_btnGroup;
    QSpacerItem *verticalSpacer;
    QLabel *label_date;
    QLabel *label_time;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *MainWidgetBtnGroup)
    {
        if (MainWidgetBtnGroup->objectName().isEmpty())
            MainWidgetBtnGroup->setObjectName("MainWidgetBtnGroup");
        MainWidgetBtnGroup->resize(20, 40);
        gridLayout = new QGridLayout(MainWidgetBtnGroup);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MainWidgetBtnGroup);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_btnGroup = new QWidget(widget);
        widget_btnGroup->setObjectName("widget_btnGroup");

        verticalLayout->addWidget(widget_btnGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_date = new QLabel(widget);
        label_date->setObjectName("label_date");
        QFont font;
        font.setPointSize(12);
        label_date->setFont(font);
        label_date->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_date);

        label_time = new QLabel(widget);
        label_time->setObjectName("label_time");
        label_time->setFont(font);
        label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_time);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(MainWidgetBtnGroup);

        QMetaObject::connectSlotsByName(MainWidgetBtnGroup);
    } // setupUi

    void retranslateUi(QWidget *MainWidgetBtnGroup)
    {
        MainWidgetBtnGroup->setWindowTitle(QCoreApplication::translate("MainWidgetBtnGroup", "Form", nullptr));
        label_date->setText(QString());
        label_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidgetBtnGroup: public Ui_MainWidgetBtnGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGETBTNGROUP_H
