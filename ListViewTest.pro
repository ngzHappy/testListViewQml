CONFIG += c++14
CONFIG += console

QT += core gui
QT += widgets
QT += qml
QT += quick

TARGET = ListViewTest
TEMPLATE = app


SOURCES += main.cpp \
    ListViewTest.cpp
SOURCES += MainWindow.cpp

HEADERS  += $$PWD/MainWindow.hpp \
    ListViewTest.hpp

FORMS    += MainWindow.ui

RESOURCES += \
    source.qrc



