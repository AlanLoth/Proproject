#ifndef PROFE_H
#define PROFE_H

#include <QDialog>

namespace Ui {
class profe;
}

class profe : public QDialog
{
    Q_OBJECT

public:
    explicit profe(QWidget *parent = nullptr);
    ~profe();

private:
    Ui::profe *ui;
};

#endif // PROFE_H
