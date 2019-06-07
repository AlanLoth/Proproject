#ifndef LLAMA_H
#define LLAMA_H
#include <profe.h>
#include <alumno.h>
#include <iostream>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QList>
#include <QString>

class llama
{

public:
    llama(){}
    ~llama(){}
    void haceProfe(QString,QString,QString,QString);
    void haceAlumno(QString,QString,QString,QString);
    void inic(QString,QString);
    void conecta();
};

#endif // LLAMA_H

