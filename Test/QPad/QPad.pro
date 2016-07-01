#-------------------------------------------------
#
# Project created by QtCreator 2013-12-02T21:57:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QPad
TEMPLATE = app


SOURCES += main.cpp\
        qpad.cpp \
    CodeEditor.cpp

HEADERS  += qpad.h \
    codeeditor.h

FORMS    += qpad.ui

RESOURCES += \
    icons.qrc
