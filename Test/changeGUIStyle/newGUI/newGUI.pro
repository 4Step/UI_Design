######################################################################
# Automatically generated by qmake (3.0) Sun Dec 1 04:30:33 2013
######################################################################
QT += widgets
qtHaveModule(printsupport): QT += printsupport
#unix:qtHaveModule(dbus): QT += dbus widgets

HEADERS += printview.h spreadsheet.h spreadsheetdelegate.h spreadsheetitem.h
SOURCES += main.cpp \
           printview.cpp \
           spreadsheet.cpp \
           spreadsheetdelegate.cpp \
           spreadsheetitem.cpp
RESOURCES += spreadsheet.qrc

build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/itemviews/spreadsheet
INSTALLS += target
