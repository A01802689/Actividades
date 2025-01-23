#include "Auto.h"
#include <iostream>
#include <string>

using namespace std;

Carro::Carro(){

   marca= "Desconocido";
   modelo= "Desconocido";
   color= "Desconocido";
}

void Carro::setMarca(){

    cout<<"Dame la marca del auto: "<<endl
    cin>>marca;

}
string Carro::getMarca(){
    return marca;

}

void Carro::setModelo(){
    cout<<"Dame el modelo del auto "<<endl
    cin>>modelo;

}
string Carro::getModelo(){
    return modelo;

}

void Carro::setColor(){
    cout<<"Dame el color del auto"<<endl;
    cin>>color;

}
string Carro::getColor(){
    return color;
}