#ifndef MATE_H
#define MATE_H


class Operaciones{

private:
 
 float xCaudrada;
 float xNorm;
 float num;
 float Xuno;
 float Xdos;

public:


Operaciones();


    void setCuadrado();
    void setXNorm();
    void setNum();


    float getNumXX();
    float getNumX();
    float getNum();


   float calculoUno();
    float calculoDos();
    void imprimir();

};

#endif 