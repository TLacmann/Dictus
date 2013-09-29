#include "configurationload.h"
#include <QFile>
#include <QtXml>
#include <QMessageBox>

ConfigurationLoad::ConfigurationLoad(bool firstOpening, QString schoolName)
{
    //SaveData.XMl einlesen und grundlegende daten einlesen
        QFile file("XML\SaveData.xml");

        if (!file.open(QIODevice::ReadOnly)) return; // cannot read file

        QDomDocument doc;
        if (!doc.setContent(&file)) return; // cannot parse file

        QDomElement rootElement = doc.documentElement();

        QDomNodeList configuration = rootElement.childNodes();

        int FirstOpening;

        for (uint i = 0; i < configuration.length(); ++i)
        {
            QDomNode node = configuration.item(i);
            if (node.isNull() || !node.isElement() || node.nodeName() != "configuration") continue;

            QDomElement element = node.toElement();
            FirstOpening =  element.attribute("firstOpening").toInt();

        }

    if (FirstOpening == 1){
        //Erstes mal öffnen ==> Schulauswahlmenü öffnen

        QMessageBox MSGFirstOpening;
        MSGFirstOpening.setText("Sie öffnen das Programm zum ersten mal!");
        MSGFirstOpening.exec();

    }
    else {
        //bereits geöffnet Schule laden
        QMessageBox MSGSecundaryOpening;
        MSGSecundaryOpening.setText("Sie öffnen das Programm nicht zum ersten mal!");
        MSGSecundaryOpening.exec();
    }


    QString schoolname = "Albert-Einstein-Gymnasium-Ulm";
}
