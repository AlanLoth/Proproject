#include "profe.h"
#include "ui_profe.h"

profe::profe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profe)
{
    ui->setupUi(this);
}

profe::~profe()
{
    delete ui;
}
