#-------------------------------------------------
#
# Project created by QtCreator 2017-10-19T22:00:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Fractals
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    fractal.cpp \
    dessincairo.cpp \
    dessinopengl.cpp

HEADERS  += mainwindow.h \
    fractal.h \
    dessincairo.h \
    dessinopengl.h \
    include.h

FORMS    += mainwindow.ui
