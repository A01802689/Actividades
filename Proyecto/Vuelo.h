#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class vuelo {

private:

    int NumVuelo;
    string nombreAvion;
    int pasajeros;
    float precio;
    string destino;
    float duracion;
    float Kilometros;
    float kmUsuario;
    float CuantosAsientos;

public:
    vuelo();

    void setDatos(int num, string nombre, int Humano, float cost, string dest, float dur, float Kilome);
    void gestionarVuelos();
    void mostrarInfo();

    void Impresion();
};

#endif

