#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Read(QString Filename) {

    QFile mFile(Filename);

    if (!mFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not read file";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

    mFile.close();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Read("D:/000/_qt/ResourceFiles/theresources.qrc");

    return a.exec();
}
