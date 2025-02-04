#include "CaloriaDia.h"
#include <iostream>

using namespace std;

CaloriaDia::CaloriaDia() {
    sexo = ' ';
    calorias = 0.0;
    FactorAct = 0.0;
    Opcion = ' ';
}

void CaloriaDia::setSexo() {
    cout << "Qué género eres (M/F): ";
    cin >> sexo;
}

char CaloriaDia::getSexo() {
    return sexo;
}

float CaloriaDia::Actividad() {
    cout << "Elige una de las opciones: " << endl;
    cout << "1) Sedentario (poca actividad física): 1.2" << endl;
    cout << "2) Ligera (1-3 veces por semana): 1.375" << endl;
    cout << "3) Moderada (3-5 veces por semana): 1.55" << endl;
    cout << "4) Intensa (6-7 veces por semana): 1.725" << endl;
    cout << "5) Extrema (atleta profesional): 1.9" << endl;
    cin >> Opcion;

    if (Opcion == '1') {
        FactorAct = 1.2;
    } else if (Opcion == '2') {
        FactorAct = 1.375;
    } else if (Opcion == '3') {
        FactorAct = 1.55;
    } else if (Opcion == '4') {
        FactorAct = 1.725;
    } else if (Opcion == '5') {
        FactorAct = 1.9;
    } else {
        cout << "Opción no válida, se tomará el valor por defecto (1.2)" << endl;
    }

    return FactorAct;
}
float CaloriaDia::Operaciones(Usuario& usuario) {  
    if (sexo == 'M' || sexo == 'm') {
        calorias = (66 + (13.7 * usuario.getPeso()) + (5 * usuario.getAltura()) - (6.8 * usuario.getEdad())) * FactorAct;
    } else if (sexo == 'F' || sexo == 'f') {
        calorias = (655 + (9.6 * usuario.getPeso()) + (1.8 * usuario.getAltura()) - (4.7 * usuario.getEdad())) * FactorAct;
    }
    return calorias;
}

void CaloriaDia::Final() {
    Usuario nuevoUsuario;
    nuevoUsuario.setNombre();
    nuevoUsuario.setAltura();
    nuevoUsuario.setEdad();
    nuevoUsuario.setPeso();
    usuarios.push_back(nuevoUsuario);

    cout << "Calorías diarias necesarias para " << nuevoUsuario.getNombre() << ": " 
         << Operaciones(nuevoUsuario) << " kcal" << endl;
}
