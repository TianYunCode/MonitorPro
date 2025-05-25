#ifndef VIDEOMAINWIDGET_H
#define VIDEOMAINWIDGET_H

#include <QWidget>

namespace Ui {
class VideoMainWidget;
}

//视频回放的主窗口
class VideoMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoMainWidget(QWidget *parent = nullptr);
    ~VideoMainWidget();

private:
    Ui::VideoMainWidget *ui;
};

#endif // VIDEOMAINWIDGET_H
