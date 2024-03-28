//#include "widget.h"
//#include "ui_widget.h"

//Widget::Widget(QWidget *parent)
//    : QWidget(parent)
//    , ui(new Ui::Widget)
//{
//    ui->setupUi(this);
//}

//Widget::~Widget()
//{
//    delete ui;
//}

#include "widget.h"
#include <QVBoxLayout>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    urlLineEdit = new QLineEdit;
    downloadButton = new QPushButton("Download");
    networkManager = new QNetworkAccessManager(this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(urlLineEdit);
    layout->addWidget(downloadButton);

    setLayout(layout);

    connect(downloadButton, &QPushButton::clicked, this, &Widget::downloadSubtitles);
}

Widget::~Widget()
{
}

void Widget::downloadSubtitles()
{
    qDebug() << "Downloading subtitles...";
    QString videoUrl = urlLineEdit->text();
    QNetworkReply *reply = networkManager->get(QNetworkRequest(QUrl(videoUrl)));

    connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray data = reply->readAll();
            // Process the downloaded data and save subtitles to a file
            QFile file("subtitles.srt");
            if (file.open(QIODevice::WriteOnly)) {
                file.write(data);
                file.close();
                qDebug() << "Subtitles downloaded successfully!";
            }
        } else {
            qDebug() << "Error downloading subtitles:" << reply->errorString();
        }
        reply->deleteLater();
    });
}

