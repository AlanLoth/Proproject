#ifndef PMAT_H
#define PMAT_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class pMat;
}

class pMat : public QDialog
{
    Q_OBJECT

public:
    explicit pMat(QWidget *parent = nullptr);
    ~pMat();

private slots:
    void on_cancela_clicked();

    void on_okea_clicked();

private:
    Ui::pMat *ui;
};

#endif // PMAT_H
