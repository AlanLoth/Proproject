#include "inicia.h"
#include "ui_inicia.h"

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
    close();
}

void Inicia::on_okea_clicked()
{
    QString pasw = ui->textEdit_2->toPlainText();
    QString mat = ui->textEdit->toPlainText();
    if (pasw=="" || mat==""){
        QMessageBox::information(this,"Error","Rellene todo");
    }else {
            inic(mat,pasw);
    }
}
