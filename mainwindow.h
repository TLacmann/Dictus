#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtXml/QXmlDefaultHandler>
#include <QtWebKit/QtWebKit>
#include <QtWebKit/QWebElement>
#include <QtWebKitWidgets/QWebPage>
#include <QtWidgets>

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
