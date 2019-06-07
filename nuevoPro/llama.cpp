#include "llama.h"

int llama::haceProfe(QString nom,QString ape,QString pasw,QString matr){
    QSqlQuery mys;
    int x=0;
    mys.exec("SELECT * FROM Profe WHERE Matricula='"+matr+"';");
    if(mys.size()==0){
        int newid=mys.exec("SELECT MAX(idProfe) FROM Profe;");
        QString str=QString::fromStdString(std::to_string(newid+1));
        str="INSERT INTO Profe VALUES('"+str+"','"+nom+"','"+ape+"','"+matr+"','"+pasw+"');";
        mys.exec(str);
        x=1;
    }
    return x;
}

int llama::haceAlumno(QString nom,QString ape,QString pasw,QString matr){
    QSqlQuery mys;
    int x=0;
    mys.exec("SELECT * FROM Alumno WHERE Matricula='"+matr+"';");
    if(mys.size()==0){
        int newid=mys.exec("SELECT MAX(idAlumno) FROM Alumno");
        QString str=QString::fromStdString(std::to_string(newid+1));
        str="INSERT INTO Alumno VALUES('"+str+"','"+nom+"','"+ape+"','"+matr+"','"+pasw+"');";
        mys.exec(str);
        x=1;
    }
    return x;
}

int llama::inic(QString matr,QString pasw){
    int x=0;
    QSqlQuery mys;
    if(matr[0]=="0"){
        mys.exec("SELECT * FROM Profe WHERE Matricula='"+matr+"' and Pasw='"+pasw+"';");
        if(mys.size()!=0){
            x=1;
        }
    } else {
        mys.exec("SELECT * FROM Alumno WHERE Matricula='"+matr+"' and Pasw='"+pasw+"';");
        if(mys.size()!=0){
            x=2;
        }
    }
    return x;
}

void llama::conecta(){

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("mydb");//nombre de la base
    if(db.open()){
        std::cout<<"conecto"<<std::endl;
    } else {
        std::cout<<"no"<<std::endl;
    }

}

int llama::pmat(QString id,QString nom){
    int x=0;
    QSqlQuery mys;
    mys.exec("SELECT * FROM Materia WHERE Profe_idProfe='"+id+"' and Nombre='"+nom+"';");
    if(mys.size()!=0){
        int newid=mys.exec("SELECT MAX(idProfe) FROM Materia;");
        QString str=QString::fromStdString(std::to_string(newid+1));
        str="INSERT INTO Materia VALUES('"+str+"','"+nom+"','"+id+"');";
        mys.exec(str);
        x=1;
    }
    return x;
}
