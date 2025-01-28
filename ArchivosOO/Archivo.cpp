

#include "Archivo.h"
#include <iostream>
#include<fstream>


using namespace std;


archivo::archivo()
{
    nombreA="";
}


void archivo::setNombreA(string n){
    nombreA=n;
}


string archivo::getNombreA(){
    return nombreA;
}


void archivo::escribir(){


    ofstream archivo;
    string cadena;
    int numero;


    archivo.open("vuelos.dat",ios::out);
    if(archivo.fail()){
        cout<<"El archivo no se pudo abrir";
        exit(1);
    }


    for(int i=1;i<=5;i++){
        cout<<"Nombre: ";
        cin>>cadena;
        archivo<<i<<cadena<<endl;//Escribe en el archivo un int y un string
    }
    archivo.close();
}
void archivo::leer(){
    ifstream archivo;
    string cadena;
    string cadena2;
    int numero,numero2;


    archivo.open("vuelos.dat",ios::in);
    if(archivo.fail()){
        cout<<"El archivo no se pudo abrir"<<endl;
        exit(1);
    }


    while(!archivo.eof()){
        //getline(archivo,cadena);
       archivo>>numero>>cadena>>cadena2>>numero2;
       if(!archivo.eof()){
        cout<<numero<<" "<<cadena<<" "<<cadena2<<" "<<numero2<<endl;
       }
    }


}


archivo::~archivo()
{
    //dtor
}
