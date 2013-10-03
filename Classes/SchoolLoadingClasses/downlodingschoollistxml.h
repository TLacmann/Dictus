#ifndef DOWNLODINGSCHOOLLISTXML_H
#define DOWNLODINGSCHOOLLISTXML_H

#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class downlodingSchoolListXml : public QObject
{
    Q_OBJECT
    public:
        explicit downlodingSchoolListXml(QUrl fileUrl, QObject *parent = 0);

        virtual ~downlodingSchoolListXml();

        QByteArray downloadedData() const;

    signals:
            void downloaded();

    private slots:

        void fileDownloaded(QNetworkReply* pReply);

private:

    QNetworkAccessManager m_WebCtrl;

    QByteArray m_DownloadedData;


public:
    downlodingSchoolListXml();

};

#endif // DOWNLODINGSCHOOLLISTXML_H
