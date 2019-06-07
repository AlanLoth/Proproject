#-------------------------------------------------
#
# Project created by QtCreator 2019-06-02T20:02:31
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nuevoPro
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        alumno.cpp \
        inicia.cpp \
        llama.cpp \
        main.cpp \
        mainwindow.cpp \
        profe.cpp \
        registra.cpp

HEADERS += \
        alumno.h \
        inicia.h \
        llama.h \
        mainwindow.h \
        profe.h \
        registra.h

FORMS += \
        alumno.ui \
        inicia.ui \
        mainwindow.ui \
        profe.ui \
        registra.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/../../mysql-connector-c++-8.0.16-win32/mysql-connector-c++-8.0.16-win32/lib/vs14/ -lmysqlcppconn

INCLUDEPATH += $$PWD/../../mysql-connector-c++-8.0.16-win32/mysql-connector-c++-8.0.16-win32/lib/vs14
DEPENDPATH += $$PWD/../../mysql-connector-c++-8.0.16-win32/mysql-connector-c++-8.0.16-win32/lib/vs14
