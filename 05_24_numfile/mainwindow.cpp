#include <QApplication>
#include <QTextStream>
#include <QPlainTextEdit>
#include <QFile>
#include <QFileDialog>
#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fileLoad() {
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setViewMode(QFileDialog::List);
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this);
    QFile file(fileName);
    file.open(QFile::ReadWrite | QFile::Text);
    QTextStream fileRead(&file);
    ui->fileView->setText(fileRead.readAll());

    //int num = 0, sum = 0, count = 0;
    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        //count++;
        //sum+=num;
    }
    //QString strNumProc = "This file contains " + QString::number(count) +
    //        " numbers. The sum of these numbers is " + QString::number(sum) +
    //        "The average is " + QString::number(sum/count);
    ui->numProc->setText(fileName);
}

void MainWindow::fileSave() {
    QString fileName;
    fileName = QFileDialog::getSaveFileName(this);
    QFile file(fileName);
    if (file.open(QFile::ReadWrite)) {
        QTextStream fileWrite(&file);
        fileWrite << ui->fileView->toPlainText();
    }
}

void MainWindow::fileClose() {

}

void MainWindow::on_btnOpen_clicked()
{
    MainWindow::fileLoad();
}

void MainWindow::on_btnExit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_btnSave_clicked()
{
    MainWindow::fileSave();
}

void MainWindow::on_btnClose_clicked()
{
    MainWindow::fileClose();
}
