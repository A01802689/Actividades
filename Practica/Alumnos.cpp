#include <iostream>
#include "Alumnos.h"


alumnos::alumnos(){
    nombre="Desconocido";
    edad=0;
}
void alumnos::setEdad(){
    cout<<"Dame tu edad"<<endl;
    cin>>edad;
   

 }
int alumnos::getEdad(){
    return edad;

}

void alumnos::setNom(){
     cout<<"Dame tu nombre"<<endl;
    cin>>nombre;

}
string alumnos::getNom(){
    return nombre;

}

void alumnos::Resultados(){
    char opcion =' ';

    do{
   
    setNom();
    setEdad();
    objeto1.Numeros();
    cout<<"los resultados de tu suma de 5 numeros es: "<<objeto1.suma()<<endl;
    cout<<"Quieres hcaerlo otra vez: (s/n)";
    cin>>opcion;
    }
    while(opcion!='n');
}

