#include "schoolselectiondialoge.h"
#include "ui_schoolselectiondialoge.h"

#include <QtXml>
#include <QtWidgets>
#include <QFile>
#include <QMessageBox>



SchoolSelectionDialoge::SchoolSelectionDialoge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SchoolSelectionDialoge)
{
    ui->setupUi(this);
}

    QUrl schoolListUrl; //wird von XML Datei ausgelesen

   /*loadSchoolListUrl(schoolListUrl);

    //downloadingSchoolListXml *downloding list = new downloadingschoollistxml(this);
    //downloadingSchoolListXml(schoolListUrl);

    void loadSchoolListUrl (QUrl url) {

        QFile file("\XML\Settings.xml");
         if (!file.open(IO_ReadOnly)) return; // cannot read file

         QDomDocument doc;

         if (!doc.setContent(&file)) return; // cannot parse file

         QDomElement rootElement = doc.documentElement();

         // gehe mal davon aus, dass die character Element gleich darunter kommen
         QDomNodeList settingsElements = rootElement.childNodes();
         for (uint i = 0; i < settingsElements.length(); ++i)
         {
             QDomNode node = characters.item(i);
             if (node = "schoolListUrl") continue;

             QDomElement element = node.toElement();
             schoolListUrl = element.attribute("schoolListUrl");

         }

         QMessageBox testMSG;
         testMSG.setText("XML-Element" + schoolListUrl.toString());
         testMSG.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
         testMSG.setDefaultButton(QMessageBox::Yes);
         int ret = testMSG.exec();

         return(url);

    }

    Warum Fehler*/



SchoolSelectionDialoge::~SchoolSelectionDialoge()


{
    delete ui;
}
