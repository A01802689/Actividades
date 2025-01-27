#include "Usuario.h"
#include <iostream>
#include <string>
using namespace std;

Usuario::Usuario(){
    nombre="Descoonocido";
    correo="Desconocido";
    registro=' ';
    edad=0;

}
void Usuario::setNombre(){
    cout<<"Dame tu nombre"<<endl;
    cin>>nombre;
}
string Usuario::getNombre(){
        return nombre;

}


void Usuario::setEdad(){
    cout<<"Dame tu edad"<<endl;
    cin>>edad;
}
int Usuario::getEdad(){
    return edad;
}

void Usuario::setCorreo(){
    cout<<"Ingrese su correo: "<<endl;
    cin>>correo;

}

string Usuario::getCorreo(){
    return correo;
}

void Usuario::Registro(){
cout<<"Bienvenido a la aerolinea"<<endl;
 cout<<"haremos su registro"<<endl;
        setNombre();
        setEdad();
        setCorreo();       
}
