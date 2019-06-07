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


void MainWindow::on_ini_clicked()
{
    close();
    Inicia *inicia =new Inicia;
    inicia->setVisible(true);
}

void MainWindow::on_reg_clicked()
{
    close();
    Registra *reg =new Registra;
    reg->setVisible(true);
}
