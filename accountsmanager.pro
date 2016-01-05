#-------------------------------------------------
#
# Project created by QtCreator 2016-01-05T09:55:12
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = accountsmanager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    accountsmanager.cpp \
    categoriesdialog.cpp

HEADERS  += mainwindow.h \
    accountsmanager.h \
    categoriesdialog.h

FORMS    += mainwindow.ui \
    categoriesdialog.ui
