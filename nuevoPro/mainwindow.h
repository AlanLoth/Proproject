#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <inicia.h>
#include <registra.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ini_clicked();

    void on_reg_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
