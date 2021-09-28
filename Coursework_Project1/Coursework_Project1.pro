QT       += core gui
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addday.cpp \
    date.cpp \
    forecast.cpp \
    info.cpp \
    main.cpp \
    mainwindow.cpp \
    weather.cpp

HEADERS += \
    addday.h \
    date.h \
    forecast.h \
    info.h \
    mainwindow.h \
    weather.h

FORMS += \
    addday.ui \
    forecast.ui \
    info.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
