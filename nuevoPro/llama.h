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
    int haceProfe(QString,QString,QString,QString);
    int haceAlumno(QString,QString,QString,QString);
    int inic(QString,QString);
    void pmat(QString,QString);
    void conecta();
};

#endif // LLAMA_H
