#ifndef CAPACIDAD_H
#define CAPACIDAD_H
using namespace std;

class capacidad{

    private:

    int anio;
    float kilometraje;
    int puertas;
    int NumPasajeros;
    float rendimiento;
    float capacidadT;
    float gasolinaT;

    public:

    capacidad();

    void setAnio();
    int getAnio();

    void NumPasajeros();
    int NumPasajeros();
    
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
    float CalculaConsumo();
    float llenaTanque();
    float requiereMantenimiento();
    void validaGasolinaEnTanque();

};
#endif