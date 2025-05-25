#ifndef MONITORMAINWIDGET_H
#define MONITORMAINWIDGET_H

#include <QWidget>

namespace Ui {
class MonitorMainWidget;
}

//实时监控的主窗口
class MonitorMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MonitorMainWidget(QWidget *parent = nullptr);
    ~MonitorMainWidget();

    void initUI();

private:
    Ui::MonitorMainWidget *ui;
};

#endif // MONITORMAINWIDGET_H
