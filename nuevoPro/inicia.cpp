#include "inicia.h"
#include "ui_inicia.h"
#include "mainwindow.h"

Inicia::Inicia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inicia)
{
    ui->setupUi(this);
}

Inicia::~Inicia()
{
    delete ui;
}


void Inicia::on_cancela_clicked()
{
    MainWindow* w=new MainWindow;
    w->show();
    close();
}

void Inicia::on_okea_clicked()
{
    int x=0;
    QString pasw = ui->textEdit_2->toPlainText();
    QString mat = ui->textEdit->toPlainText();
    if (pasw=="" || mat==""){
        QMessageBox::information(this,"Error","Rellene todo");
    }else {
            x=inic(mat,pasw);
            if (0==x){
                QMessageBox::information(this,"Error","Usuario o pasword incorrecto");
            } else if(x==2){
                alumno* alum=new alumno(mat);
                alum->show();
                close();
            } else {
                close();
                profe* prof=new profe(mat);
                prof->show();
                close();
            }
    }
}
