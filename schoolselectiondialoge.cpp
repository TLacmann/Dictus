#include "schoolselectiondialoge.h"
#include "ui_schoolselectiondialoge.h"

SchoolSelectionDialoge::SchoolSelectionDialoge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SchoolSelectionDialoge)
{
    ui->setupUi(this);
}

SchoolSelectionDialoge::~SchoolSelectionDialoge()
{
    delete ui;
}
