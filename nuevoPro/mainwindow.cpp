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
    Inicia *inicia =new Inicia(this);
    inicia->setModal(true);
    inicia->setVisible(true);
}

void MainWindow::on_reg_clicked()
{
    Registra *reg =new Registra(this);
    reg->setModal(true);
    reg->setVisible(true);
}
