#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

}
