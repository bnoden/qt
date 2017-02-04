#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir("D:/000/_qt");

    foreach(QFileInfo mitm, mDir.entryInfoList()) {
        //qDebug() << mitm.absoluteFilePath();
        if(mitm.isDir()) qDebug() << "Dir: " << mitm.absoluteFilePath();
        if(mitm.isFile()) qDebug() << "File: " << mitm.absoluteFilePath();
    }

    return a.exec();
}
