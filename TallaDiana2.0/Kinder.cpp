#include "Kinder.h"
#include <iostream>

Kinder::Kinder()
{

}

void Kinder::setDatosVector(){
   char opc;
    Persona P;

    do{
            //P=new persona();
            P.setEstaturaMama();
            P.setEstaturaPapa();
            P.setSexo();
            k.push_back(P);
            cout<<"Capturar datos de otro niño o niña? s/n";
            cin>>opc;
    }while(opc!='n');
}



void Kinder::imprimeVector(){

    vector<Persona>::iterator aux;

    aux=k.begin();

    while(aux!=k.end()){
        aux->imprimeEstatura();
        aux++;
    }

    /*Con for

    for (int i=0;i<k.size();i++){
            k[i].imprimeEstatura();

*/   }

float Kinder::sumaEstaturas() {
    float suma = 0;
    for (int i = 0; i < k.size(); ++i) { 
        suma += k[i].calculaEstatura();
    }
    return suma;
}

void Kinder::EstaturasTotales(){
    cout<<"La suma de todos los jovenes es de: "<<sumaEstaturas()<<endl;
}


Kinder::~Kinder()
{
    //dtor
}