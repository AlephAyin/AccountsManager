#-------------------------------------------------
#
# Project created by QtCreator 2016-01-05T09:55:12
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = accountsmanager
TEMPLATE = app


SOURCES += \
    src/main.cpp\
    src/mainwindow.cpp \
    src/accountsmanager.cpp \
    src/categoriesdialog.cpp

HEADERS  += \
    src/mainwindow.h \
    src/accountsmanager.h \
    src/categoriesdialog.h

FORMS    += \
    src/mainwindow.ui \
    src/categoriesdialog.ui
