#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString name = "bnoden";
    ui->label->setText(QString("Hey, <font color='#0D7DB5'><strong>%1</strong></font>!").arg(name));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", "Button pushed successfully");
}

void Dialog::on_pushButton_2_clicked()
{
    //ui->lineEdit->setText("button pushed successfully");
    QMessageBox::information(this, "info", "Password: " + ui->lineEdit->text());
}
