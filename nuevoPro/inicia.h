#ifndef INICIA_H
#define INICIA_H

#include <QDialog>
#include <llama.h>
#include <QMessageBox>

namespace Ui {
class Inicia;
}

class Inicia : public QDialog, llama
{
    Q_OBJECT

public:
    explicit Inicia(QWidget *parent = nullptr);
    ~Inicia();

private slots:

    void on_cancela_clicked();

    void on_okea_clicked();

private:
    Ui::Inicia *ui;
};

#endif // INICIA_H
