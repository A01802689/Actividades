#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario() {
    nombre = "Desconocido";
    correo = "Desconocido";
    registro = ' ';
    edad = 0;
    Opcion = ' ';
}

void Usuario::setNombre() {
    cout << "Dame tu nombre: ";
    cin>>nombre;
}

string Usuario::getNombre() {
    return nombre;
}

void Usuario::setEdad() {
    cout << "Dame tu edad: ";
    cin >> edad;
}

int Usuario::getEdad() {
    return edad;
}

void Usuario::setCorreo() {
    cout << "Ingrese su correo: ";
    cin >> correo;
}

string Usuario::getCorreo() {
    return correo;
}

void Usuario::Registro() {
    cout << "Bienvenido a nuestra página de reserva en línea" << endl;
    cout << "Haremos su registro..." << endl;
    setNombre();
    setEdad();
    setCorreo();
}
