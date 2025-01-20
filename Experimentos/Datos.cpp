#include "Datos.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

INFO::INFO(){
    edad=0;
    ubicacion="Ubicacion desconocida";
    cantidad=0;
}

void INFO::setCantidadPersonas() {
    cout << "Dime cuantas personas haran esto (no deben ser mas de 8): " << endl;
    cin >> cantidad;
    if (cantidad > 8) {
        cantidad = 8;
    }
}

int INFO::getCantidad() {
    return cantidad;
}

void INFO::setEdad() {
    cout << "Dame tu edad: " << endl;
    cin >> edad;
}

int INFO::getEdad() {
    return edad;
}

void INFO::setUbicacion() {
    cout << "Dame tu ubicacion: " << endl;
    cin >> ubicacion;
}

string INFO::getUbicacion() {
    return ubicacion;
}

void INFO::ImpresionFinal() {
    for (int i = 0; i < cantidad; i++) {
        cout << "Persona " << i + 1 << ":" << endl;
        cout<<"Edad: "<<getEdad()<<endl;
        cout<<"Ubicacion: "<<getUbicacion()<<endl;
        Persona[i].setNombre();
        Persona[i].setDineroDiario();
        Persona[i].Imprimir();
    }
    cout << "Gracias por usar el programa :D" << endl;
}