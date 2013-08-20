#-------------------------------------------------
#
# Project created by QtCreator 2013-08-03T10:20:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bulls_and_cows
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    levelcomplexitydialog.cpp \
    aboutthisdialog.cpp \
    intvalidator.cpp

HEADERS  += mainwindow.h \
    levelcomplexitydialog.h \
    aboutthisdialog.h \
    intvalidator.h

FORMS    += mainwindow.ui \
    levelcomplexitydialog.ui \
    aboutthisdialog.ui

RESOURCES += \
    res/resourses.qrc
