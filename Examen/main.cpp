#include <iostream>
#include "Usuario.h"
#include "CaloriaDia.h"

using namespace std;

int main() {
    CaloriaDia calculadora;
    
    cout << "=== Calculadora de Calorías Diarias ===" << endl;
    
    calculadora.setSexo();
    float factorActividad = calculadora.Actividad();
    
    Usuario usuario;
    usuario.setNombre();
    usuario.setAltura();
    usuario.setEdad();
    usuario.setPeso();

    float caloriasNecesarias = calculadora.Operaciones(usuario);
    cout << "Calorías diarias necesarias para " << usuario.getNombre() 
         << ": " << caloriasNecesarias << " kcal" << endl;

    return 0;
}
