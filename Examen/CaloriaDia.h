#ifndef CALORIADIA_H
#define CALORIADIA_H

#include <iostream>
#include <vector>
#include "Usuario.h"

using namespace std;

class CaloriaDia {
private:
    char sexo;
    float calorias;
    float FactorAct;
    char Opcion;
    vector<Usuario> usuarios;

public:
    CaloriaDia();
    void setSexo();
    char getSexo();
    float Actividad();
    float Operaciones(Usuario& usuario); 
    void Final();
};

#endif
