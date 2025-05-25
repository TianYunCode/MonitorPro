#ifndef CUSTOMIZEBTN_H
#define CUSTOMIZEBTN_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class CustomizeBtn;
}

//自定义的按钮
class CustomizeBtn : public QWidget
{
    Q_OBJECT

public:
    explicit CustomizeBtn(QWidget *parent = nullptr);
    ~CustomizeBtn();

    //设置样式
    void setNormalStyle();
    void setClickedStyle();

    //设置图标、名称、窗口大小
    void setIcon(const QString& iconPath, const int &width, const int &high);
    void setName(const QString& name, const int &size);
    void setSize(const int& width, const int& high);

    //获取图标路径、名称、窗口宽高
    QString getIconPath();
    QString getName();
    int getWidth();
    int getHigh();

signals:
    void signalClicked(); //点击左键触发信号

protected:
    void mousePressEvent(QMouseEvent *event) override; // 重写鼠标按下事件

private:
    Ui::CustomizeBtn *ui;

    QString m_iconPath; //图标路径
    QString m_name;     //按钮名称
    int m_width;        //窗口宽度
    int m_high;         //窗口高度
};

#endif // CUSTOMIZEBTN_H
