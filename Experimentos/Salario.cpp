#include "Salario.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

Dinero::Dinero() {
    for (int i = 0; i < 5; i++) {
        dinero[i] = 0;
    }
    nombre = "Usuario Desconocido";
}

void Dinero::setNombre() {
    cout << "Dame tu nombre: " << endl;
    cin >> nombre;
}

string Dinero::getNombre() {
    return nombre;
}

void Dinero::setDineroDiario() {
    cout << "Cuanto dinero haces de lunes a viernes?" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Dia " << i + 1 << ": ";
        cin >> dinero[i];
    }
}

float Dinero::Calculo() {
    float prom = 0;
    for (int i = 0; i < 5; i++) {
        prom += dinero[i];
    }
    return prom / 5.0;
}

void Dinero::Imprimir() {
    cout << "Usuario: " << nombre << endl;
    cout << "Ganancias Diarias: ";
    for (int i = 0; i < 5; i++) {
        cout << dinero[i] << " ";
    }
    cout << endl;
    cout << "Promedio de ganancias semanales: " << Calculo() << endl;
}