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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_3;
    QRadioButton *radioButton1;
    QPushButton *pushButton_4;
    QRadioButton *radioButton2;
    QComboBox *comboBox;
    QPushButton *pushButton_5;
    QListWidget *listWidget;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(246, 437);
        Dialog->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);

        radioButton1 = new QRadioButton(Dialog);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setChecked(true);

        gridLayout->addWidget(radioButton1, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        radioButton2 = new QRadioButton(Dialog);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));

        gridLayout->addWidget(radioButton2, 4, 0, 1, 1);

        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 5, 0, 1, 1);

        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_5, 5, 1, 1, 1);

        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("background:#000000;\n"
"color:#cccccc;"));

        gridLayout->addWidget(listWidget, 6, 0, 1, 2);

        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_6, 7, 0, 1, 2);


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
        pushButton_5->setText(QApplication::translate("Dialog", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Dialog", "6", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
