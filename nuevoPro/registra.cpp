#include "registra.h"
#include "ui_registra.h"
#include <mainwindow.h>

Registra::Registra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registra)
{
    ui->setupUi(this);
}

Registra::~Registra()
{
    delete ui;
}

void Registra::on_cancela_clicked()
{
    MainWindow* w=new MainWindow;
    w->show();
    close();
}

void Registra::on_okea_clicked()
{
    int x=0;
    QString nombre = ui->nom->toPlainText();
    QString apell = ui->ape->toPlainText();
    QString pasw = ui->pasw->toPlainText();
    QString pasw2 = ui->pasw2->toPlainText();
    QString mat = ui->matri->toPlainText();
    if (nombre=="" || apell=="" || pasw=="" || pasw2=="" || mat==""){
        QMessageBox::information(this,"Error","Rellene todo");
    }else if(pasw!=pasw2){
        QMessageBox::information(this,"Error","Password diferentes");
    }else if(mat[0]!="0" && ui->Profesor->isCheckable()){
        QMessageBox::information(this,"Error","No eres profe >:v");
    }else if(ui->Profesor->isCheckable()){
        x=haceProfe(nombre,apell,pasw,mat);
        if (x==0){
            QMessageBox::information(this,"Error","Profe ya existe");
        } else {
            profe* prof=new profe(mat);
            prof->show();
            close();
        }
    }else if(mat[0]=="0" && ui->alumno->isCheckable()){
        QMessageBox::information(this,"Error","No eres Alumno >:v");
    }else if(ui->alumno->isCheckable()){
        x=haceAlumno(nombre,apell,pasw,mat);
        if (x==0){
            QMessageBox::information(this,"Error","Alumno ya existe");
        } else {
            alumno* alum=new alumno(mat);
            alum->show();
            close();
        }
    } else {
        QMessageBox::information(this,"Error","Seleccione una opcion");
    }
}
