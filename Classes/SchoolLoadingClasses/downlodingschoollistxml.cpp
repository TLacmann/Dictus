#include "downlodingschoollistxml.h"
#include <QString>
#include <QtNetwork>
#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

downlodingSchoolListXml::downlodingSchoolListXml(QUrl fileUrl, QObject *parent) :
    QObject(parent)
{
    connect(&m_WebCtrl, SIGNAL(finished(QNetworkReply*)),
                    SLOT(fileDownloaded(QNetworkReply*)));

        QNetworkRequest request(fileUrl);
        m_WebCtrl.get(request);
    }

    downlodingSchoolListXml::~downlodingSchoolListXml()
    {

    }

    void downlodingSchoolListXml::fileDownloaded(QNetworkReply* pReply)
    {
        m_DownloadedData = pReply->readAll();
        //emit a signal
        pReply->deleteLater();
        emit downloaded();
    }

    QByteArray downlodingSchoolListXml::downloadedData() const
    {
        return m_DownloadedData;

}
