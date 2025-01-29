#include "Operaciones.h"
#include <iostream>
using namespace std;



operacion::operacion(){

    for(int i=0; i<5; i++){
        numeros[i]=0.0;
    }
}

void operacion::Numeros(){
    cout<<"Dame 5 numeros que quieras sumar"<<endl;
    for(int i=0; i<5; i++){
        cout<<"Num("<<i+1<<"): ";
        cin>>numeros[i];
    }
}

float operacion::suma(){
    float sum=0.0;

    for(int i=0; i<5;i++){
        sum=sum+numeros[i];
    }
   return sum;
}
