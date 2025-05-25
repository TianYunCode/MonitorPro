#include "MainWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //加载样式表
    a.setStyleSheet(":/Resource/QSS/default.qss");

    MainWidget w;
    w.show();

    return a.exec();
}
