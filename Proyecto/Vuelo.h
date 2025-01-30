#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <string>

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
    int CuantosAsientos;

public:
    vuelo();

    void setDatos(int num, string nombre, int Humano, float cost, string dest, float dur, float Kilome);
    void gestionarVuelos();
    void mostrarInfo();

    void setKilometraje();
    float getKilometraje();

    void ComprobarDescuento();
};

#endif

