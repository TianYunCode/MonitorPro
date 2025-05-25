#ifndef MAINWIDGETTITLE_H
#define MAINWIDGETTITLE_H

#include <QWidget>
#include <QSignalMapper>
#include <QMouseEvent>

#include <Config.h>
#include "ResourcePath.h"

namespace Ui {
class MainWidgetTitle;
}

//主窗口的标题栏
class MainWidgetTitle : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidgetTitle(QWidget *parent = nullptr);
    ~MainWidgetTitle();

    void initUI();
    void changeZoomBtnIcon();

signals:
    void signalButtonClicked(int id);       //最小化、最大化（恢复）、退出按钮被点击时触发信号
    void signalCustomizeEvent(int event);   //自定义事件信号

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;    //鼠标双击事件，实现最大化和缩放窗口

private:
    Ui::MainWidgetTitle *ui;

    bool m_isZoom;  //记录窗口是否放大状态
};

#endif // MAINWIDGETTITLE_H
