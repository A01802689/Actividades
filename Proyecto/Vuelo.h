#ifndef VUELO_H
#define VUELO_H
#include <vector>
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class vuelo {

private:
    vector <Usuario> Persona;
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

