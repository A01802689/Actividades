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
    int pasajeros;
    float precio;
    string destino;
    float duracion;
    float Kilometros;

    public:

    vuelo();//Listo

    void gestionarVuelos();//Listo
    void setDatos(int num, string nombre,int Humano, float cost, string dest, float dur, float Kilome);//Listo
    void mostrarInfo();//Listo
    
   /* void setKilometraje();
    float getKilometraje();

    float ComprobarDescuento();//compruba si se alplica descuento
    void ImpresionDeInfo();*/
};
#endif

