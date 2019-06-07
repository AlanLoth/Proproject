#include "llama.h"

void llama::haceProfe(QString nom,QString ape,QString pasw,QString matr){
    QSqlQuery mys;
    mys.exec("SELECT * FROM Profe WHERE Matricula='"+matr+"';");
    if(mys.size()==0){
        int newid=mys.exec("SELECT MAX(idProfe) FROM Profe;");
        QString str=QString::fromStdString(std::to_string(newid+1));
        str="INSERT INTO Profe VALUES('"+str+"','"+nom+"','"+ape+"','"+matr+"','"+pasw+"');";
        mys.exec(str);
        profe *prof =new profe;
        prof->setVisible(true);
    }
}

void llama::haceAlumno(QString nom,QString ape,QString pasw,QString matr){
    QSqlQuery mys;
    mys.exec("SELECT * FROM Alumno WHERE Matricula='"+matr+"';");
    if(mys.size()==0){
        int newid=mys.exec("SELECT MAX(idAlumno) FROM Alumno");
        QString str=QString::fromStdString(std::to_string(newid+1));
        str="INSERT INTO Alumno VALUES('"+str+"','"+nom+"','"+ape+"','"+matr+"','"+pasw+"');";
        mys.exec(str);
        alumno *alum =new alumno;
        alum->setVisible(true);
    }
}

void llama::inic(QString matr,QString pasw){
    QSqlQuery mys;
    if(matr[0]=="0"){
        mys.exec("SELECT * FROM Profe WHERE Matricula='"+matr+"' and Pasw='"+pasw+"';");
        if(mys.size()!=0){
            profe *prof =new profe;
            prof->setVisible(true);
        }
    } else {
        mys.exec("SELECT * FROM Alumno WHERE Matricula='"+matr+"' and Pasw='"+pasw+"';");
        if(mys.size()!=0){
            alumno *alum =new alumno;
            alum->setVisible(true);
        }
    }
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
