#ifndef CAPACIDAD_H
#define CAPACIDAD_H
using namespace std;

class capacidad {
private:
    int anio;
    float kilometraje;
    int puertas;
    int NumPasajeros;
    float rendimiento;
    float capacidadT;
    float gasolinaT;
    float distancia;
    int asientos;

public:
    capacidad();

    void setAnio();
    int getAnio();

    void setNumPasajeros();
    int getNumPasajeros();

    void setDistanciaRecorrer();
    float getDistanciaRecorrer();

    void setAsientos();
    int getAsientos();

    void setKilometraje();
    float getKilometraje();

    void setNumPuertas();
    int getNumPuertas();

    void setRendimiento();
    float getRendimiento();

    void setCapacidadTanque();
    float getCapacidadTanque();

    void setGasolinaEnTanque();
    float getGasolinaEnTanque();

    float AvanzaAutomovil();
    float calculaConsumo();
    void llenaTanque();
    bool requiereMantenimiento();
    void validaGasolinaEnTanque();
};
#endif