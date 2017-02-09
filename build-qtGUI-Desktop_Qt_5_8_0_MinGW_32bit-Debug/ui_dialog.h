/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_3;
    QRadioButton *radioButton1;
    QPushButton *pushButton_4;
    QRadioButton *radioButton2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(208, 172);
        formLayout = new QFormLayout(Dialog);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_2);

        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBox);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_3);

        radioButton1 = new QRadioButton(Dialog);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, radioButton1);

        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        radioButton2 = new QRadioButton(Dialog);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, radioButton2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "Hi there!", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "2", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Dialog", "check", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "3", Q_NULLPTR));
        radioButton1->setText(QApplication::translate("Dialog", "this", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Dialog", "4", Q_NULLPTR));
        radioButton2->setText(QApplication::translate("Dialog", "that", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
