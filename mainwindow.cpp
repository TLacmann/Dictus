#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <string>
#include <iostream>
#include <QString>
#include <QMessageBox>
#include <QtGui>
#include <QDataStream>
#include <QDomDocument>
#include <QDomNode>
#include <QFile>


//#include "XML\SaveData.xml"
//#include "XML\Albert-Einstein-Gymnasium-Ulm.xml"
//#include "Test.xml"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString SchoolName;
    boolean FirstOpening;

    //Aufrufen der Configurationload klasse mit Schulname als rückgabewert und Erstaufruf
    myclass configurationload1 = new configurationload(this); //= new class configurationload;
    configurationload(FirstOpening, SchoolName);


    QMessageBox selectedSchoolMSG;
    selectedSchoolMSG.setText("Gewählte Schule:" + SchoolName);
    selectedSchoolMSG.setInformativeText("Ist dies ihre Schule?");
    selectedSchoolMSG.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    selectedSchoolMSG.setDefaultButton(QMessageBox::Yes);
    int ret = selectedSchoolMSG.exec();

    switch (ret) {
       case QMessageBox::Yes:
           // Save was clicked
           break;
       case QMessageBox::No:
           // Don't Save was clicked
           break;

       default:
           // should never be reached
        QMessageBox FailNoButtonSelectedMSG;
        FailNoButtonSelectedMSG.setText("Error! No button pressed!");
        FailNoButtonSelectedMSG.exec();
           break;
     }


    QString XMLschoolFileName = SchoolName + ".xml";

    /*
    QFile file (XMLschoolFile);
    if(!file.open(IO_ReadOnly))
    {
        return; //cannot read file
    }

    QDomDocument doc;
    if (!doc.setContent(&file))
    {
        return; //cannot parse file
    }
    */
    int CountOfCourses = 2;
    int CoursesArray[CountOfCourses];
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pBnewCoursSelection_clicked()
{
  //  MessageBox(HWND_DESKTOP,"Neue Kurswahl","Test",MB_OK)
  //  QTabBar *Tab;
  //  Tab->SelectRightTab;
  //schoolxmlarraybuild(CoursesArray[]);

}
