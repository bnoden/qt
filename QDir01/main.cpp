#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QString dir = "D:/000/_qt";
    QString mPath = "D:/000/_qt/mkpath";

    //QDir mDir(dir);
    QDir mDir(mPath);

    //qDebug() << dir << ":" << mDir.exists();

    qDebug() << "Drives:";

    foreach(QFileInfo mItm, mDir.drives()) {
        qDebug() << mItm.absoluteFilePath();
    }

    if (!mDir.exists(mPath)) {
        mDir.mkpath(mPath);
        qDebug() << "Created" << mPath;
    }
    else {
        qDebug() << "Aready exists";
    }

    return a.exec();
}
