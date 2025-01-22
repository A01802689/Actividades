#ifndef ALUM_H
#define ALUM_H

#include "Operaciones.h"
#include <string>

using namespace std;

class alumnos{

    private:
    string nombre; 
    int edad;
    operacion objeto1;

    public:
    alumnos();

    void setEdad();
    int getEdad();

    void setNom();
    string getNom();

    void Resultados();

};
#endif