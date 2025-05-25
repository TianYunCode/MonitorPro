#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QPushButton>
#include <QPointF>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

//主窗口
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void initUI();

private:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

protected:
    void minimizeWindow();
    void zoomWindow();
    void closeWindow();
    void switchPageMonitorWindow();
    void switchPageVideoWindow();

private slots:
    void onButtonClicked(int id);   //接收并处理ui->widget_title（标题栏）按钮发出的所有信号
    void onCustomizeEvent(int id);  //接收并处理ui->widget_title（标题栏）发出的自定义事件信号
    void onSwitchWindow(int id);    //接收并处理ui->widget_btnGroup（按钮栏）按钮发出的所有信号

private:
    Ui::MainWidget *ui;

    bool isDragging;
    QPoint lastMousePos;
};
#endif // MAINWIDGET_H
