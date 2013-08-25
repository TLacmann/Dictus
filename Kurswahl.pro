#-------------------------------------------------
#
# Project created by QtCreator 2013-03-09T18:03:29
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kurswahl
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Classes/XML/schoolXML/coursesarrayread.cpp

HEADERS  += mainwindow.h \
    Classes/XML/schoolXML/coursesarrayread.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    XML/SaveData.xml \
    XML/Albert-Einstein-Gymnasium-Ulm.xml \
    Test.xml
