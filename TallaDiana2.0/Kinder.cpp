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



Kinder::~Kinder()
{
    //dtor
}