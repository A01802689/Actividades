#include "Grados.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;



Grados::Grados(){
    cel=0;
}

void Grados::setGrados(){
    cout<<"Dame los grados celcius para convertitlo en Farenheit"<<endl;
    cin>>cel;
}

float Grados::getGrados(){

    return cel;
}

float Grados::calcuFaren(){

     return cel*(9.0/5)+32;
}

 void Grados::imprimeResultado(){

    cout<<"El valor de los grados celcius a Farenheit es de "<<calcuFaren()<<endl;
 }