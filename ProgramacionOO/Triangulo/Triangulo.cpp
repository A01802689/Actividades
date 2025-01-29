#include <iostream>
#include "Triangulo.h"
using std::cin;
using std::cout;
using std::endl;

Triangulo::Triangulo() {
    base = 0;
    altura = 0;
}

void Triangulo::set_Base() {
    cout << "Captura la base: ";
    cin >> base;
}

float Triangulo::get_Base() {
    return base;
}

void Triangulo::set_Altura() {
    cout << "Captura la altura: ";
    cin >> altura;
}

float Triangulo::get_Altura() {
    return altura;
}

float Triangulo::calculaArea() {
    return (base * altura) / 2;
}

void Triangulo::imprimeArea() {
    cout << "El área del triángulo es: " << calculaArea() << endl;
}
