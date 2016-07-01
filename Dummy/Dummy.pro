#-------------------------------------------------
#
# Project created by QtCreator 2013-11-28T10:44:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dummy
TEMPLATE = app


SOURCES += main.cpp\
        dummy.cpp \
    mydialog.cpp

HEADERS  += dummy.h \
    mydialog.h

FORMS    += dummy.ui \
    mydialog.ui

OTHER_FILES += \
    images/4pics.BMP \
    images/3pics.BMP \
    Resource/4pics.BMP \
    Resource/3pics.BMP

RESOURCES += \
    Resource.qrc
