#ifndef REGISTRA_H
#define REGISTRA_H

#include <QDialog>
#include <llama.h>
#include <QMessageBox>

namespace Ui {
class Registra;
}

class Registra : public QDialog, llama
{
    Q_OBJECT

public:
    explicit Registra(QWidget *parent = nullptr);
    ~Registra();

private slots:
    void on_cancela_clicked();

    void on_okea_clicked();

private:
    Ui::Registra *ui;
};

#endif // REGISTRA_H
