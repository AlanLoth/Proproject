#include "pmat.h"
#include "ui_pmat.h"

pMat::pMat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pMat)
{
    ui->setupUi(this);
}

pMat::~pMat()
{
    delete ui;
}

void pMat::on_cancela_clicked()
{
    close();
}

void pMat::on_okea_clicked()
{
    QString nombre = ui->textEdit->toPlainText();
    if(nombre==""){
        QMessageBox::information(this,"Error","Ingrese algo");
    } else {

    }
}
