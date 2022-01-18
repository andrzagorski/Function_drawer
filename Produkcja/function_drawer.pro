QT       += core gui
QMAKE_LFLAGS += -static

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    data_layer.cpp \
    gui_layer.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    rysowanie.cpp \
    services_layer.cpp

HEADERS += \
    data_layer.h \
    gui_layer.h \
    mainwindow.h \
    qcustomplot.h \
    rysowanie.h \
    services_layer.h \
    ui_mainwindow.h \
    ui_rysowanie.h

FORMS += \
    mainwindow.ui \
    rysowanie.ui

TRANSLATIONS += \
    function_drawer_pl_PL.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
