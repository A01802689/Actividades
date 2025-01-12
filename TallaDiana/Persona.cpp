// Persona.cpp
#include "Persona.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Persona::Persona() {
    estaturaP = 0;
    estaturaM = 0;
    sexo = ' ';
}

void Persona::setSexo() {
    cout << "Que genero es tu bebe, escribe M/F" << endl;
    cin >> sexo;
}

void Persona::setEstaturaPapa() {
    cout << "Dame la estatura del Papa en cm" << endl;
    cin >> estaturaP;
}

void Persona::setEstaturaMama() {
    cout << "Dame la estatura de la Mama en cm" << endl;
    cin >> estaturaM;
}

float Persona::getEstaturaPapa() {
    return estaturaP;
}

float Persona::getEstaturaMama() {
    return estaturaM;
}

char Persona::getSexo() {
    return sexo;
}

float Persona::calculaEstatura() {
    float altura = (estaturaM + estaturaP) / 2;
    if (sexo == 'M') {
        altura += 6.5;
    } else if (sexo == 'F') {
        altura -= 6.5;
    } else {
        cout << "Elige un sexo correcto" << endl;
    }
    return altura;
}

void Persona::imprimeEstatura() {
    cout << "La altura del bebe puede ser de " << calculaEstatura() << " centimetros" << endl;
}
