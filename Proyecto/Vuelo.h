#ifndef VUELO_H
#define VUELO_H
#include "Usuario.h"
#include <vector>

using namespace std;

class vuelo{

    private:

    vector<Usuario> Persona;
    string fecha;
    float hora;
    float precio;
    string modelo;
    string destino;
    int distancia;
    int CapacidadPasajeros;
    int gasolina;
    string asientosPasajeros;

    public:

    Vuelo();
    void set_FechaVuelo();
    string get_FechaVuelo();

    void set_HoraVuelo();
    float set_HoraVuelo();

    void set_PrecioVuelo();
    float get_PrecioVuelo();

    void set_ModeloAvion();
    srting get_ModeloAvion();

    void set_DestinoVuelo();
    string get_DestinoVuelo();
    
    void set_DistacniaVuelo();
    foat get_DistanciaVuelo();

    void CalculaGasolina();
    

};
#endif

