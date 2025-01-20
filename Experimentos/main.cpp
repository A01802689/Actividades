#include "Datos.h"
#include "Salario.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){

    INFO objeto1;

    objeto1.setCantidadPersonas();
    objeto1.setEdad();
    objeto1.setUbicacion();
    objeto1.ImpresionFinal();

    return 0;

}