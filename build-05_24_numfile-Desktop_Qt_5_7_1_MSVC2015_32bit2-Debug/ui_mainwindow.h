/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QToolButton *btnOpen;
    QToolButton *btnSave_2;
    QToolButton *btnSaveAs;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnClose;
    QTextEdit *fileView;
    QLabel *numProc;
    QToolButton *btnExit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(741, 488);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(29, 33, 15);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnOpen = new QToolButton(centralWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setStyleSheet(QLatin1String("background-color: rgb(44, 162, 58);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btnOpen, 0, 0, 1, 1);

        btnSave_2 = new QToolButton(centralWidget);
        btnSave_2->setObjectName(QStringLiteral("btnSave_2"));
        btnSave_2->setStyleSheet(QLatin1String("background-color: rgb(45, 171, 217);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btnSave_2, 0, 1, 1, 1);

        btnSaveAs = new QToolButton(centralWidget);
        btnSaveAs->setObjectName(QStringLiteral("btnSaveAs"));
        btnSaveAs->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 182, 151);"));

        gridLayout->addWidget(btnSaveAs, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(516, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        btnClose = new QToolButton(centralWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setStyleSheet(QLatin1String("background-color: rgb(159, 0, 2);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btnClose, 0, 4, 1, 1);

        fileView = new QTextEdit(centralWidget);
        fileView->setObjectName(QStringLiteral("fileView"));
        fileView->setStyleSheet(QLatin1String("color: rgb(150, 208, 191);\n"
"font: 16pt \"Consolas\";"));

        gridLayout->addWidget(fileView, 1, 0, 1, 5);

        numProc = new QLabel(centralWidget);
        numProc->setObjectName(QStringLiteral("numProc"));
        numProc->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(numProc, 2, 0, 1, 1);

        btnExit = new QToolButton(centralWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setStyleSheet(QLatin1String("background-color: rgb(95, 81, 82);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btnExit, 2, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Text Editor", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        btnSave_2->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        btnSaveAs->setText(QApplication::translate("MainWindow", "Save As...", Q_NULLPTR));
        btnClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        numProc->setText(QApplication::translate("MainWindow", "no file", Q_NULLPTR));
        btnExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
