/********************************************************************************
** Form generated from reading UI file 'MainWidgetTitle.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGETTITLE_H
#define UI_MAINWIDGETTITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidgetTitle
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_icon;
    QVBoxLayout *verticalLayout;
    QLabel *label_titleNameChinese;
    QLabel *label_titleNameEnglish;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_minimize;
    QPushButton *pushButton_zoom;
    QPushButton *pushButton_close;

    void setupUi(QWidget *MainWidgetTitle)
    {
        if (MainWidgetTitle->objectName().isEmpty())
            MainWidgetTitle->setObjectName("MainWidgetTitle");
        MainWidgetTitle->resize(158, 32);
        gridLayout = new QGridLayout(MainWidgetTitle);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MainWidgetTitle);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(14, 0, 0, 0);
        label_icon = new QLabel(widget);
        label_icon->setObjectName("label_icon");

        horizontalLayout->addWidget(label_icon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        label_titleNameChinese = new QLabel(widget);
        label_titleNameChinese->setObjectName("label_titleNameChinese");
        label_titleNameChinese->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_titleNameChinese);

        label_titleNameEnglish = new QLabel(widget);
        label_titleNameEnglish->setObjectName("label_titleNameEnglish");

        verticalLayout->addWidget(label_titleNameEnglish);

        verticalLayout->setStretch(0, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(902, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_minimize = new QPushButton(widget);
        pushButton_minimize->setObjectName("pushButton_minimize");

        horizontalLayout->addWidget(pushButton_minimize);

        pushButton_zoom = new QPushButton(widget);
        pushButton_zoom->setObjectName("pushButton_zoom");

        horizontalLayout->addWidget(pushButton_zoom);

        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName("pushButton_close");

        horizontalLayout->addWidget(pushButton_close);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(MainWidgetTitle);

        QMetaObject::connectSlotsByName(MainWidgetTitle);
    } // setupUi

    void retranslateUi(QWidget *MainWidgetTitle)
    {
        MainWidgetTitle->setWindowTitle(QCoreApplication::translate("MainWidgetTitle", "Form", nullptr));
        label_icon->setText(QString());
        label_titleNameChinese->setText(QString());
        label_titleNameEnglish->setText(QString());
        pushButton_minimize->setText(QString());
        pushButton_zoom->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidgetTitle: public Ui_MainWidgetTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGETTITLE_H
