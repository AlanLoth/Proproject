#include "profe.h"
#include "ui_profe.h"

profe::profe(QString matricula, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profe)
{
    ui->setupUi(this);
    matr=matricula;
}

profe::~profe()
{
    delete ui;
}
