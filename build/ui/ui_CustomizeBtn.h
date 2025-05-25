/********************************************************************************
** Form generated from reading UI file 'CustomizeBtn.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMIZEBTN_H
#define UI_CUSTOMIZEBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomizeBtn
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_icon;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CustomizeBtn)
    {
        if (CustomizeBtn->objectName().isEmpty())
            CustomizeBtn->setObjectName("CustomizeBtn");
        CustomizeBtn->resize(20, 34);
        gridLayout_2 = new QGridLayout(CustomizeBtn);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(CustomizeBtn);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        label_icon = new QLabel(widget);
        label_icon->setObjectName("label_icon");
        label_icon->setScaledContents(true);
        label_icon->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_icon);

        label_name = new QLabel(widget);
        label_name->setObjectName("label_name");
        label_name->setScaledContents(true);
        label_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_name);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(CustomizeBtn);

        QMetaObject::connectSlotsByName(CustomizeBtn);
    } // setupUi

    void retranslateUi(QWidget *CustomizeBtn)
    {
        CustomizeBtn->setWindowTitle(QCoreApplication::translate("CustomizeBtn", "Form", nullptr));
        label_icon->setText(QString());
        label_name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomizeBtn: public Ui_CustomizeBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMIZEBTN_H
