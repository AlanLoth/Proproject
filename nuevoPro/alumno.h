#ifndef ALUMNO_H
#define ALUMNO_H

#include <QDialog>
#include <QString>

namespace Ui {
class alumno;
}

class alumno : public QDialog
{
    Q_OBJECT

public:
    explicit alumno(QString,QWidget *parent = nullptr);
    ~alumno();

private:
    Ui::alumno *ui;
    QString matr;
};

#endif // ALUMNO_H
