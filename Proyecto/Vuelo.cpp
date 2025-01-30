#include "Vuelo.h"
#include <iostream>


Vuelo::Vuelo() {
    NumVuelo = 0;
    nombreAvion = "Desconocido";
    pasajeros=0;
    precio = 0.0;
    destino = "No hay destino";
    duracion = 0.0;
}


void Vuelo::setDatos(int num, string nombre,int Humano, float cost, string dest, float dur) {
    NumVuelo = num;
    nombreAvion = nombre;
    precio = cost;
    destino = dest;
    duracion = dur;
    pasajeros=Humano;
}

void Vuelo::mostrarInfo() {
    cout << "Número de vuelo: " << NumVuelo << endl;
    cout << "Nombre del avión: " << nombreAvion << endl;
     cout<< "Numero de pasajeros: "<<pasajeros;
    cout << "Precio del boleto: $" << precio << endl;
    cout << "Destino: " << destino << endl;
    cout << "Duración del vuelo: " << duracion << " horas" << endl;
    cout << endl;
}

void gestionarVuelos() {
    Vuelo aviones[5];

    aviones[0].setDatos(101, "Boeing 747", 80, 500.0, "Nueva York", 6.5);
    aviones[1].setDatos(102, "Airbus A320", 100, 350.0, "Los Ángeles", 5.0);
    aviones[2].setDatos(103, "Boeing 777", 50, 700.0, "Londres", 8.2);
    aviones[3].setDatos(104, "Concorde", 145, 1000.0, "París", 3.5);
    aviones[4].setDatos(105, "Embraer E190",98,  280.0, "Madrid", 4.7);
        for (int i = 0; i < 5; i++) {
        aviones[i].mostrarInfo();
    }
}

