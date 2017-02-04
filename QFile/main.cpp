#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString Filename) {

    QFile mFile(Filename);

    if (!mFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Could not open file";
        return;
    }

    QTextStream out(&mFile);
    out << "BYe world!";

    mFile.flush();
    mFile.close();
}

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

    QString mFilename = "D:/000/_qt/random.txt";
    Write(mFilename);
    Read(mFilename);

    return a.exec();
}
