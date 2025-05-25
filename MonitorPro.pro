QT       += core gui

TARGET = MonitorPro
TEMPLATE = app

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

#include($$PWD/LogModule/LogModule.pri)

# 添加 Log4cpp 头文件路径
#INCLUDEPATH += $$PWD/third/log4cpp/include

# 添加 Log4cpp 动态库路径
#LIBS += -L$$PWD/third/log4cpp/lib -llog4cpp

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CustomizeBtn.cpp \
    MainWidgetBtnGroup.cpp \
    MainWidgetTitle.cpp \
    MonitorMainWidget.cpp \
    VideoMainWidget.cpp \
    main.cpp \
    MainWidget.cpp

HEADERS += \
    Config.h \
    CustomizeBtn.h \
    MainWidget.h \
    MainWidgetBtnGroup.h \
    MainWidgetTitle.h \
    MonitorMainWidget.h \
    ResourcePath.h \
    VideoMainWidget.h

FORMS += \
    CustomizeBtn.ui \
    MainWidget.ui \
    MainWidgetBtnGroup.ui \
    MainWidgetTitle.ui \
    MonitorMainWidget.ui \
    VideoMainWidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DESTDIR         = $$PWD/build/app     #可执行文件存放路径
OBJECTS_DIR     = $$PWD/build/obj     #中间文件存放路径（.o 文件）
MOC_DIR         = $$PWD/build/moc     #元对象文件存放路径（moc文件）
UI_DIR          = $$PWD/build/ui      #UI文件生成的头文件存放路径
RCC_DIR         = $$PWD/build/rcc     #资源文件生成的头文件存放路径
