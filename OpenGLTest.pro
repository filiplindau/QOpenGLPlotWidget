#-------------------------------------------------
#
# Project created by QtCreator 2015-04-11T13:25:25
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenGLTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qopenglplotwidget.cpp

HEADERS  += mainwindow.h \
    qopenglplotwidget.h

FORMS    += mainwindow.ui
