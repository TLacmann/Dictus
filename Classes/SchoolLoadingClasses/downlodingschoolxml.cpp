#include "downlodingschoolxml.h"
#include <QString>
#include <QtNetwork>
#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

DownlodingSchoolXML::DownlodingSchoolXML(QUrl fileUrl, QObject *parent)
{
    connect(&m_WebCtrl, SIGNAL(finished(QNetworkReply*)),
                    SLOT(fileDownloaded(QNetworkReply*)));

        QNetworkRequest request(fileUrl);
        m_WebCtrl.get(request);
    }

    DownlodingSchoolXML::~DownlodingSchoolXML()
    {

    }

    void DownlodingSchoolXML::fileDownloaded(QNetworkReply* pReply)
    {
        m_DownloadedData = pReply->readAll();
        //emit a signal
        pReply->deleteLater();
        emit downloaded();
    }

    QByteArray DownlodingSchoolXML::downloadedData() const
    {
        return m_DownloadedData;


    }
