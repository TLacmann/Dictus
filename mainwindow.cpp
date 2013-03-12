#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <c++/string>
//#include <QString>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QString School = Ui.cBSchool->itemData(0);
    //QMessageBox.show(School);
    /*
    String schoolname = "AlbertEinsteinGymnasium-Ulm";
    String XMLschoolFile = schoolname + "-xml";

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
