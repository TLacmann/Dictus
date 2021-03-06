#include "mainwindow.h"
#include "ui_mainwindow.h"


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
    bool FirstOpening;



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
  /*MessageBox(HWND_DESKTOP,"Neue Kurswahl","Test",MB_OK)
  QTabBar *Tab;
  Tab->SelectRightTab;
  schoolxmlarraybuild(CoursesArray[]);
  */

}

void MainWindow::on_pBUpdate_clicked()
{

}

void MainWindow::on_pBHelp_clicked()
{
    newSchoolSelectionDialoge = new SchoolSelectionDialoge();
    newSchoolSelectionDialoge->show();
}

void MainWindow::on_pBselectSchool_clicked()
{
    newSchoolSelectionDialoge = new SchoolSelectionDialoge();
    newSchoolSelectionDialoge->show();

}
