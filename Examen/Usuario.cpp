#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario() {
    nombre = "";
    altura = 0.0;
    edad = 0;
    peso = 0.0;
}

void Usuario::setNombre() {
    cout << "Dame tu nombre: ";
    cin >> nombre;
}

string Usuario::getNombre() {
    return nombre;
}

void Usuario::setAltura() {
    cout << "Dame tu altura: ";
    cin >> altura;
}

float Usuario::getAltura() {
    return altura;
}

void Usuario::setEdad() {
    cout << "Dame tu edad: ";
    cin >> edad;
}

int Usuario::getEdad() {  
    return edad;
}

void Usuario::setPeso() {
    cout << "Cuánto pesas: ";
    cin >> peso;
}

float Usuario::getPeso() {
    return peso;
}
