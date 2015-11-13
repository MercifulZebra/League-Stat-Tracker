#-------------------------------------------------
#
# Project created by QtCreator 2015-11-11T09:10:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LeagueStatTracker
TEMPLATE = app

Release:DESTDIR = release
Release:OBJECTS_DIR = release/.obj
Release:MOC_DIR = release/.moc
Release:RCC_DIR = release/.rcc
Release:UI_DIR = release/.ui

Debug:DESTDIR = debug
Debug:OBJECTS_DIR = debug/.obj
Debug:MOC_DIR = debug/.moc
Debug:RCC_DIR = debug/.rcc
Debug:UI_DIR = debug/.ui

SOURCES += main.cpp\
        mainwindow.cpp \
    squarelabel.cpp

HEADERS  += mainwindow.h \
    squarelabel.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources/resources.qrc
