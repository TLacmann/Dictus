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
    schoolselectiondialoge.cpp \
    Classes/ArrayReadinClasses/coursesarrayread.cpp \
    Classes/ConfigurationClasses/configurationload.cpp \
    Classes/SchoolLoadingClasses/schoolloadingclass.cpp \
    Classes/SchoolLoadingClasses/downlodingschoolxml.cpp \
    Classes/ArrayReadinClasses/hoursarrayread.cpp

HEADERS  += mainwindow.h \
    Classes/XML/schoolXML/coursesarrayread.h \
    schoolselectiondialoge.h \
    Classes/configurationload.h \
    Classes/ArrayReadinClasses/coursesarrayread.h \
    Classes/ConfigurationClasses/configurationload.h \
    Classes/SchoolLoadingClasses/schoolloadingclass.h \
    Classes/SchoolLoadingClasses/downlodingschoolxml.h \
    Classes/ArrayReadinClasses/hoursarrayread.h

FORMS    += mainwindow.ui \
    schoolselectiondialoge.ui

OTHER_FILES += \
    XML/SaveData.xml \
    XML/Albert-Einstein-Gymnasium-Ulm.xml \
    Test.xml \
    XML/SchoolList.XML
