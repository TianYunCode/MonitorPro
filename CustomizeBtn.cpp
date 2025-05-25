#include "CustomizeBtn.h"
#include "ui_CustomizeBtn.h"

CustomizeBtn::CustomizeBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomizeBtn)
    , m_iconPath("")
    , m_name("")
    , m_width(0)
    , m_high(0)
{
    ui->setupUi(this);
    setNormalStyle();
}

CustomizeBtn::~CustomizeBtn()
{
    delete ui;
}

void CustomizeBtn::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    // 仅处理鼠标左键点击
    if (event->button() == Qt::LeftButton)
    {
        emit signalClicked(); // 触发点击信号
    }
}

//设置未按下时的样式
void CustomizeBtn::setNormalStyle()
{
    ui->widget->setStyleSheet(R"(
        *{background-color: rgba(0, 0, 0, 0);border: none;}
        #widget{ background-color: rgba(0, 0, 0, 0); }
        #widget:hover{ background-color: rgba(255, 255, 255, 0.1); }
    )");
}

//设置已按下时的样式
void CustomizeBtn::setClickedStyle()
{
    ui->widget->setStyleSheet(R"(
        *{background-color: rgba(0, 0, 0, 0);border: none;}
        #widget{ background-color: rgba(255, 255, 255, 0.1); }
        #widget:hover{ background-color: rgba(255, 255, 255, 0.1); }
    )");
}

void CustomizeBtn::setIcon(const QString &iconPath, const int &width, const int &high)
{
    m_iconPath = iconPath;

    // 创建 QPixmap 并加载图标文件
    QPixmap pixmap(iconPath);

    // 对图标进行缩放（Qt::KeepAspectRatio保持宽高比，Qt::SmoothTransformation平滑缩放）
    pixmap = pixmap.scaled(width, high, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // 将处理后的图标设置到 label 上
    ui->label_icon->setPixmap(pixmap);
}

void CustomizeBtn::setName(const QString &name, const int &size)
{
    m_name = name;

    // 设置文本内容
    ui->label_name->setText(name);
    ui->label_name->setAlignment(Qt::AlignCenter);

    // 获取当前字体配置
    QFont font = ui->label_name->font();

    // 设置字体尺寸（像素单位）
    font.setPixelSize(size > 0 ? size : 12);  // 添加最小值保护

    // 设置字体自适应策略
    font.setStyleStrategy(QFont::PreferAntialias);  // 启用抗锯齿

    // 应用字体设置
    ui->label_name->setFont(font);
}

void CustomizeBtn::setSize(const int &width, const int &high)
{
    m_width = width;
    m_high = high;

    // 设置主控件尺寸
    ui->widget->setFixedSize(width, high);

    // 自动调整子控件布局（图标和文字水平居中布局）
    const int padding = 5;                   // 控件间距
    const int iconWidth = high - 2*padding;  // 图标保持正方形

    // 设置图标位置和尺寸
    ui->label_icon->setGeometry(padding, padding, iconWidth, iconWidth);

    // 设置文字标签位置（剩余空间）
    ui->label_name->setGeometry(iconWidth + 2*padding, 0, width - iconWidth - 3*padding, high);

    // 触发字号重新计算
    setName(ui->label_name->text(), ui->label_name->font().pixelSize());
}

QString CustomizeBtn::getIconPath()
{
    return m_iconPath;
}

QString CustomizeBtn::getName()
{
    return m_name;
}

int CustomizeBtn::getWidth()
{
    return m_width;
}

int CustomizeBtn::getHigh()
{
    return m_high;
}
