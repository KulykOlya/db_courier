#-------------------------------------------------
#
# Project created by QtCreator 2013-02-21T00:49:24
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = db_courier
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    commentdialog.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    commentdialog.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    commentdialog.ui

OTHER_FILES +=
