#include "Mate.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


Operaciones::Operaciones(){

    xCaudrada= 0.0;
    xNorm= 0.0;
    num= 0.0;
    Xuno=0.0;
    Xdos=0.0;
}

void Operaciones::setCuadrado(){

    cout<<"Dame el numero que este al cuadrado"<<endl;
    cin>>xCaudrada;

}
void Operaciones::setXNorm(){
    cout<<"Dame el numero que tenga solo la X"<<endl;
    cin>>xNorm;

}
void Operaciones::setNum(){
   cout<<"Dame el numero que no tenga x"<<endl;
   cin>>num;
}


float  Operaciones:: getNumXX(){

    return xCaudrada;

}
float Operaciones::getNumX(){
    return xNorm;
}
float  Operaciones::getNum(){
    return num;
}


float Operaciones::calculoUno(){

Xuno = (-xNorm + sqrt(pow(xNorm, 2) - (4 * xCaudrada * num))) / (2 * xCaudrada);

    return Xuno;
    

}
float Operaciones::calculoDos(){

    Xdos = (-xNorm - sqrt(pow(xNorm, 2) - (4 * xCaudrada * num))) / (2 * xCaudrada);

    return Xdos;

}
void Operaciones::imprimir(){
    cout<<"El resultado de x1 seria:"<<calculoUno()<<endl;
    cout<<"El resultado de x2 seria:"<<calculoDos()<<endl;
    

}