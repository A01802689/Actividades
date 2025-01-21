#include "Operaciones.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

operaciones::opreaciones(){
    for(int i=0; i<cantidad;i++){
        numeros[i]=0.0;
    }
}


float operaciones::Numeros(){
    cout<<"Dame 5 numeros para sumar"<<endl;
    for(int i=0; i<5; i++){
        cin>>numeros[i];

    }
}

const float* getNumeros() const {
        return numeros;
    }


void operaciones::Resultados(){
    cout<<"El resultado de la suma es: "<<objeto1.sumar();
}
