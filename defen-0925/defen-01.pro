#-------------------------------------------------
#
# Project created by QtCreator 2020-09-12T14:57:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = defen-01
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    defenseclass.cpp \
    tower01.cpp \
    tower02.cpp \
    tower03.cpp \
    tower04.cpp \
    tower04.cpp \
    map.cpp \
    enemy04.cpp \
    enemy01.cpp \
    enemy02.cpp \
    enemy03.cpp \
    gengeralpath.cpp \
    window.cpp \
    enemybaseclass.cpp \
    selection.cpp \
    startwindow.cpp

HEADERS += \
        mainwindow.h \
    defenseclass.h \
    tower01.h \
    tower02.h \
    tower03.h \
    tower04.h \
    enemy_1.h \
    enemy_2.h \
    enemy_3.h \
    gengeralpath.h \
    enemy_4.h \
    window.h \
    enemybaseclass.h \
    selection.h \
    map.h \
    coor.h \
    startwindow.h

FORMS += \
    window.ui \
    startwindow.ui
