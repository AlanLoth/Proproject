#ifndef PROFE_H
#define PROFE_H

#include <QDialog>
#include <QString>

namespace Ui {
class profe;
}

class profe : public QDialog
{
    Q_OBJECT

public:
    explicit profe(QString,QWidget *parent = nullptr);
    ~profe();

private:
    Ui::profe *ui;
    QString matr;
};

#endif // PROFE_H
