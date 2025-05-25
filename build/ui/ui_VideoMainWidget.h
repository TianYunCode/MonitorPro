/********************************************************************************
** Form generated from reading UI file 'VideoMainWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOMAINWIDGET_H
#define UI_VIDEOMAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoMainWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;

    void setupUi(QWidget *VideoMainWidget)
    {
        if (VideoMainWidget->objectName().isEmpty())
            VideoMainWidget->setObjectName("VideoMainWidget");
        VideoMainWidget->resize(1107, 664);
        gridLayout = new QGridLayout(VideoMainWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(VideoMainWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(VideoMainWidget);

        QMetaObject::connectSlotsByName(VideoMainWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoMainWidget)
    {
        VideoMainWidget->setWindowTitle(QCoreApplication::translate("VideoMainWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoMainWidget: public Ui_VideoMainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOMAINWIDGET_H
