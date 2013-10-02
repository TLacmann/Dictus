#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtXml/QXmlDefaultHandler>
#include <QtWebKit/QtWebKit>
#include <QtWebKit/QWebElement>
#include <QtWebKitWidgets/QWebPage>
#include <QtWidgets>


#include "schoolselectiondialoge.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pBnewCoursSelection_clicked();

    void on_pBUpdate_clicked();

    void on_pBHelp_clicked();

    void on_pBselectSchool_clicked();

private:
    Ui::MainWindow *ui;

    SchoolSelectionDialoge *newSchoolSelectionDialoge;
    //helpUi *newHelpDialoge;


};

#endif // MAINWINDOW_H
