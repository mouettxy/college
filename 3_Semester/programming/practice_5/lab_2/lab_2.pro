TEMPLATE = app
CONFIG += c++11
CONFIG -= app_bundle
CONFIG += qt

QT += widgets

CONFIG += release

SOURCES += \
        dialog.cpp \
        main.cpp

HEADERS += dialog.h ui.h
