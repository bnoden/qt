#include "dialog.h"
#include "ui_dialog.h"

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
