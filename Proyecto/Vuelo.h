#ifndef VUELO_H
#define VUELO_H
#include "Usuario.h"
#include<vector>
#include<string>

using namespace std;

class vuelo{

    private: 

    int NumVuelo;
    string nombreAvion;
    float precio;
    string destino;
    float duración;

    public:

    vuelo();
    gestionarVuelos();
    void setDatos(int num, string nombre, float cost, string dest, float dur);

    void EleccionVuelo(); 
    float Kilometraje();
    void DatosAvion();
    float ComprobarDescuento();//si alplica descuento

    void ImpresionM();
};
#endif