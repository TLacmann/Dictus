#ifndef SCHOOLSELECTIONDIALOGE_H
#define SCHOOLSELECTIONDIALOGE_H

#include <QDialog>

namespace Ui {
class SchoolSelectionDialoge;
}

class SchoolSelectionDialoge : public QDialog
{
    Q_OBJECT
    
public:
    explicit SchoolSelectionDialoge(QWidget *parent = 0);
    ~SchoolSelectionDialoge();
    
private:
    Ui::SchoolSelectionDialoge *ui;
};

#endif // SCHOOLSELECTIONDIALOGE_H
