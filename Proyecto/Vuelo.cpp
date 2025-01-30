#include "Vuelo.h"
#include <iostream>


vuelo::vuelo() {

    NumVuelo = 0;
    nombreAvion = "Desconocido";
    pasajeros=0;
    precio = 0.0;
    destino = "No hay destino";
    duracion = 0.0;
    Kilometros= 0.0;
    CuantosAsientos=0;

}


void vuelo::setDatos(int num, string nombre,int Humano, float cost, string dest, float dur, float Kilome) {
    
    NumVuelo = num;
    nombreAvion = nombre;
    pasajeros=Humano;
    precio = cost;
    destino = dest;
    duracion = dur;
    Kilometros= Kilome;
   
}

void vuelo::gestionarVuelos() {
    vuelo aviones[5];// de la clase vuelo cree una arreglo llamado aviones
    aviones[0].setDatos(1, "Boeing 747", 80, 500.0, "Nueva York", 6.5, 33000);
    aviones[1].setDatos(2, "Airbus A320", 200, 350.0, "Los Ángeles", 5.0, 25000);
    aviones[2].setDatos(3, "Boeing 777", 50, 700.0, "Londres", 8.2, 15000);
    aviones[3].setDatos(4, "Concorde", 145, 1000.0, "París", 3.5, 40000);
    aviones[4].setDatos(5, "Embraer E190",98,  280.0, "Madrid", 4.7, 15000);
        for (int i = 0; i < 5; i++) {
        aviones[i].mostrarInfo();
    }

  int eleccion = 0;
    cout << "Elige el número de vuelo que quieras: " << endl;
    cin >> eleccion;

    while (eleccion < 1 || eleccion > 5) {
        cout << "Número de vuelo inválido." << endl;

    }

    cout<<"Cuantos asinetos ocupas...."<<endl;
    cin>>CuantosAsientos;

    if (aviones[eleccion - 1].pasajeros+CuantosAsientos > 200) {
        cout << "El avión está lleno, elige otra opción" << endl;
        cin >> eleccion;
    } else {
        aviones[eleccion-1].pasajeros= aviones[eleccion-1].pasajeros + CuantosAsientos; // Incrementar el número de pasajeros o podira poenr aviones[eleccion-1].pasajero+= 1
        cout<<"Esta es la información de tu vuelo actualizado:" << endl;
        aviones[eleccion-1].mostrarInfo();
    }

}

void vuelo::mostrarInfo() {
    cout << "Número de vuelo: " << NumVuelo << endl;
    cout << "Nombre del avión: " << nombreAvion << endl;
    cout<< "Numero de pasajeros: "<<pasajeros<<endl;
    cout << "Precio del boleto: $" << precio << endl;
    cout << "Destino: " << destino << endl;
    cout << "Duración del vuelo: " << duracion << " horas" << endl;
    cout<< "Se van a recorrer: "<<Kilometros<<" Kilometros de distancia"<<endl;
    cout << endl;
}

