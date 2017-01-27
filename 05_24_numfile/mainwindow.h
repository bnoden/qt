#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void fileLoad();
    void fileSaveAs();
    void fileClose();

private slots:
    void on_btnOpen_clicked();

    void on_btnExit_clicked();

    void on_btnSaveAs_clicked();

    void on_btnClose_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
