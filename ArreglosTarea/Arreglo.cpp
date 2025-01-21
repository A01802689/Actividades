#include "Arreglo.h"
#include <iostream>
#include <random>
#include <cmath> // Para sqrt

using namespace std;

// Constructor inicializo valores de 5 a 1000
avion::avion() {
    llenarArreglo(5, 1000);
}

void avion::llenarArreglo(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min, max);

    for (int i = 0; i < 50; ++i) { // Comienza en 0
        PesoAviones[i] = dist(gen);
    }
}


void avion::mostrarPesos() const {// ya tiene los valores se hace el ciclo para que miestre cada uno de ellos
    for (int i = 0; i < 50; ++i) {
        cout << "Peso " << i + 1 << ": " << PesoAviones[i] << endl;
    }
}

void avion::calcularDispersiones(double &varianza, double &desviacionEstandar) const {
    double suma = 0.0;
    double sumaCuadrados = 0.0; /*pasa por referencia los valores de
                                               que hay en el arreglo*/
    int n = 50; // Tamaño del arreglo

    // Calcular la suma y la suma de los cuadrados
    for (int i = 0; i < n; ++i) {
        suma = suma+ PesoAviones[i];
        sumaCuadrados= sumaCuadrados+(PesoAviones[i] * PesoAviones[i]);
    }

    // Calcular la media
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
            // Si el índice es válido, mostrar el mensaje y salir del bucle
            cout << "Se ha consultado el registro " << indice
                 << " y almacena el valor " << PesoAviones[indice-1] << endl;
            return; // Salir de la función si el índice es válido
        } else {
            // Si el índice no es válido, mostrar el mensaje de error
            cout << "Error, valor de índice fuera de rango, inténtalo de nuevo." << endl;
        }
    } while (true); // Continuar solicitando el índice hasta que sea válido
}

void avion::cambiarPeso() {
    int indice, nuevoPeso;

    do {
    cout << "Índice del avión a modificar entre 1 y 50: ";
    cin >> indice;

    if (indice >= 0 && indice < 50) {
        cout << "Peso actual en el índice " << indice << ": " << PesoAviones[indice] << endl;

        do {
            cout << "Introduce el nuevo peso (entre 5 y 1000): ";
            cin >> nuevoPeso;

            if (nuevoPeso >= 5 && nuevoPeso <= 1000) {
              
                PesoAviones[indice] = nuevoPeso;
                cout << "Peso actualizado correctamente." << endl;
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
    // Ordenamiento por burbuja (Bubble Sort) en orden descendente
    for (int i = 0; i < 49; ++i) {
        for (int j = 0; j < 49 - i; ++j) {
            if (PesoAviones[j] < PesoAviones[j + 1]) {
                // Intercambiar elementos
                int temp = PesoAviones[j];
                PesoAviones[j] = PesoAviones[j + 1];
                PesoAviones[j + 1] = temp;
            }
        }
    }

    // Mostrar los valores ordenados
    cout << "Pesos ordenados en orden descendente:" << endl;
    for (int i = 0; i < 50; ++i) {
        cout << "Peso " << i + 1 << ": " << PesoAviones[i] << endl;
    }
}
