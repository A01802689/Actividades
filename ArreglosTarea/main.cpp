//Pablo Alejandro Ortiz Montes: A01802689
//Elaborado: 20/01/2025

#include <iostream>
#include "Arreglo.h"
using namespace std;

int main() {     
   
    double varianza;
    double desviacionEstandar;
    avion objeto1;
    objeto1.mostrarPesos();
    objeto1.calcularDispersiones(varianza, desviacionEstandar);
    objeto1.consultarAvion();
    objeto1.cambiarPeso(); 
    objeto1.ordenarPesos();

    cout << "Varianza: " << varianza << endl;
    cout << "Desviación estándar: " << desviacionEstandar << endl;

    return 0;
}
