#ifndef DATOS_H
#define DATOS_H
#include <string>
#include "Salario.h"
using std::string;

class INFO {

private:
    Dinero Persona[8];
    int edad;
    string ubicacion;
    int cantidad;

public:
    INFO();

    void setCantidadPersonas();
    int getCantidad();

    void setEdad();
    int getEdad();

    void setUbicacion();
    string getUbicacion();

    void ImpresionFinal();
};

#endif