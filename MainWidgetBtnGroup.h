#ifndef MAINWIDGETBTNGROUP_H
#define MAINWIDGETBTNGROUP_H

#include <QWidget>
#include <QLabel>
#include <QDate>
#include <QTime>
#include <QTimer>
#include <QVBoxLayout>

#include "CustomizeBtn.h"
#include "ResourcePath.h"
#include "Config.h"

namespace Ui {
class MainWidgetBtnGroup;
}

//主窗口的按钮组（左侧）
class MainWidgetBtnGroup : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidgetBtnGroup(QWidget *parent = nullptr);
    ~MainWidgetBtnGroup();

    //初始化UI和信号连接
    void initUI();
    void initSignalsConnect();

    //更新日期和时间（m_timer每秒触发一次）
    void updateDateTime();

signals:
    void signalSwitchWindow(int id);

private:
    Ui::MainWidgetBtnGroup *ui;

    QVBoxLayout* m_vLayout;     //垂直布局
    QTimer *m_timer;            //计时器

    CustomizeBtn *m_MonitorBtn; //实时监控按钮
    CustomizeBtn *m_VideoBtn;   //视频回放按钮
};

#endif // MAINWIDGETBTNGROUP_H
