#ifndef SALARIO_H
#define SALARIO_H

#include <string>
using namespace std;

class Dinero {

private:
    float dinero[5];
    string nombre;

public:
    Dinero();
    void setNombre();
    string getNombre();

    void setDineroDiario();
    float Calculo();
    void Imprimir();
};
#endif