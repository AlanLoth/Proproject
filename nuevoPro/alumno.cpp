#include "alumno.h"
#include "ui_alumno.h"

alumno::alumno(QString matricula,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alumno)
{
    ui->setupUi(this);
    matr=matricula;
}

alumno::~alumno()
{
    delete ui;
}
