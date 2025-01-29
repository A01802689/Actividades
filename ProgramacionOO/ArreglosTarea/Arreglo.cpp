#include "Arreglo.h"
#include <iostream>
#include <random>
#include <cmath> 

using namespace std;


avion::avion() {
    llenarArreglo(5, 1000);
}

void avion::llenarArreglo(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min, max);

    for (int i = 0; i < 50; ++i) { 
        PesoAviones[i] = dist(gen);
    }
}


void avion::mostrarPesos() const {
    for (int i = 0; i < 50; ++i) {
        cout << "Peso " << i + 1 << ": " << PesoAviones[i] << endl;
    }
}

void avion::calcularDispersiones(double &varianza, double &desviacionEstandar) const {
    double suma = 0.0;
    double sumaCuadrados = 0.0;
    int n = 50; 

    for (int i = 0; i < n; ++i) {
        suma = suma+ PesoAviones[i];
        sumaCuadrados= sumaCuadrados+(PesoAviones[i] * PesoAviones[i]);
    }


    double media = suma / n;
    varianza = (sumaCuadrados / n) - (media * media);
    desviacionEstandar = sqrt(varianza);
}

void avion::consultarAvion() const {
    int indice;

    do {
        cout << "Índice del avión a consultar entre 0 a 50: ";
        cin >> indice;

        if (indice >= 0 && indice < 50) {
           
            cout << "Se ha consultado el registro " << indice
                 << " y almacena el valor " << PesoAviones[indice-1] << endl;
            return; 
        } else {
      
            cout << "Error, valor de índice fuera de rango, inténtalo de nuevo." << endl;
        }
    } while (true);
}

void avion::cambiarPeso() {
    int indice, nuevoPeso;

    do {
    cout << "Índice del avión a modificar entre 1 y 50: ";
    cin >> indice;

    if (indice >= 0 && indice < 50) {
        cout << "Peso actual en el índice " << indice << ": " << PesoAviones[indice-1] << endl;//menos uno para evitar el 0;

        do {
            cout << "Introduce el nuevo peso (entre 5 y 1000): ";
            cin >> nuevoPeso;

            if (nuevoPeso >= 5 && nuevoPeso <= 1000) {
              
                PesoAviones[indice] = nuevoPeso;
                cout << "Peso actualizado." << endl;
                return;
            } else {
                cout << "Error, el peso debe estar entre 5 y 1000. Intenta de nuevo." << endl;
            }
        } while (true);
    } else {
        cout << "Error, índice fuera de rango. Intenta de nuevo." << endl;
    }
    } while (true);
}

void avion::ordenarPesos() {
   
    for (int i = 0; i < 49; ++i) {
        for (int j = 0; j < 49 - i; ++j) {
            if (PesoAviones[j] < PesoAviones[j + 1]) {
                int temp = PesoAviones[j];
                PesoAviones[j] = PesoAviones[j + 1];
                PesoAviones[j + 1] = temp;
            }
        }
    }

   
    cout << "Pesos ordenados en orden descendente:" << endl;
    for (int i = 0; i < 50; ++i) {
        cout << "Peso " << i + 1 << ": " << PesoAviones[i] << endl;
    }
}
