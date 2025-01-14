
#include "Peso.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

Peso::Peso(){
    peso=0;
    estatura=0;
}

void Peso::setPeso(){
    cout<<"Dime cuanto pesas"<<endl;
    cin>>peso;
}

void Peso::setEstatura(){
    cout<<"Dame tu estatura en cm"<<endl;
    cin>>estatura;
    estatura /= 100;
}

float Peso::getPeso(){
    return peso;
}

float Peso::getEstatura(){
    return estatura;
}

float Peso::calculaIMC(){

    return (peso)/(pow(estatura,2));

}

void Peso::imprimeIMC(){

    cout<<"Tu IMC es de "<<calculaIMC()<<endl;
}
