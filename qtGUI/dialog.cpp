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

    for (int i = 0x01; i < 0b00010001; i++) {
        ui->comboBox->addItem("item " + QString::number(i));
    }

    ui->checkBox->setChecked(true);

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

void Dialog::on_pushButton_3_clicked()
{
    if (ui->checkBox->isChecked()) {
        QMessageBox::information(this, "Hey", "box is checked");
    } else {
        QMessageBox::information(this, "Hey", "box is <em>not</em> checked");
    }
}

void Dialog::on_pushButton_4_clicked()
{
    if(ui->radioButton1->isChecked()) {
        QMessageBox::information(this, "Look", "Look at " + ui->radioButton1->text());
    }
    if(ui->radioButton2->isChecked()) {
        QMessageBox::information(this, "Look", "Look at " + ui->radioButton2->text());
    }
}

void Dialog::on_pushButton_5_clicked()
{
    QMessageBox::information(this, "Box", ui->comboBox->currentText());
}
