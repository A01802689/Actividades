#include "Capacidad.h"
#include <iostream>

using namespace std;

capacidad::capacidad() {
    anio = 0;
    kilometraje = 0;
    puertas = 0;
    NumPasajeros = 0;
    rendimiento = 0;
    capacidadT = 0;
    gasolinaT = 0;
    distancia = 0;
    asientos = 0;
}

void capacidad::setAsientos() {
    cout << "Cuantos asientos hay en el vehiculo:" << endl;
    cin >> asientos;
}

int capacidad::getAsientos() {
    return asientos;
}

void capacidad::setNumPasajeros() {
    cout << "Cuantos pasajeros hay: " << endl;
    cin >> NumPasajeros;
}

int capacidad::getNumPasajeros() {
    return NumPasajeros;
}

void capacidad::setAnio() {
    cout << "De que año es el vehiculo: " << endl;
    cin >> anio;
}

int capacidad::getAnio() {
    return anio;
}

void capacidad::setKilometraje() {
    cout << "Cual es el kilometraje del vehiculo: " << endl;
    cin >> kilometraje;
}

float capacidad::getKilometraje() {
    return kilometraje;
}

void capacidad::setNumPuertas() {
    cout << "Cuantas puertas tiene el vehiculo: " << endl;
    cin >> puertas;
}

int capacidad::getNumPuertas() {
    return puertas;
}

void capacidad::setRendimiento() {
    cout << "Cual es el rendimiento del vehiculo: " << endl;
    cin >> rendimiento;
}

float capacidad::getRendimiento() {
    return rendimiento;
}

void capacidad::setCapacidadTanque() {
    cout << "Cual es la capacidad del tanque: " << endl;
    cin >> capacidadT;
}

float capacidad::getCapacidadTanque() {
    return capacidadT;
}

void capacidad::setGasolinaEnTanque() {
    cout << "Cuanta gasolina tiene el vehiculo: " << endl;
    cin >> gasolinaT;
}

float capacidad::getGasolinaEnTanque() {
    return gasolinaT;
}

void capacidad::setDistanciaRecorrer() {
    cout << "Que distancia vas a recorrer con el vehiculo? " << endl;
    cin >> distancia;
}

float capacidad::getDistanciaRecorrer() {
    return distancia;
}

bool capacidad::requiereMantenimiento() {
    cout << "Kilometraje actual: " << kilometraje+ distancia << " km." << endl;

    if ((kilometraje+distancia) > 10000) {
        cout << "Mantenimiento requerido" << endl;
        return true;
    } else {
        cout << "No requiere mantenimiento" << endl;
        return false;
    }
}

float capacidad::calculaConsumo() {
    if (rendimiento <= 0) {
        cout << "Error: El rendimiento no puede ser cero o negativo." << endl;
        return -1;
    }

    float consumoBase = distancia / rendimiento;

    if (NumPasajeros == asientos) {
        consumoBase *= 1.05;
    } else if (NumPasajeros < asientos / 2) {
        consumoBase *= 0.96;
    }

    if (consumoBase > gasolinaT) {
        cout << "No hay suficiente gasolina para recorrer la distancia." << endl;
        return -1;
    }

    return consumoBase;
}

float capacidad::AvanzaAutomovil() {
    float consumo = calculaConsumo();

    if (consumo >= 0 && !requiereMantenimiento()) {
        gasolinaT -= consumo;
        cout << "El automóvil ha avanzado " << distancia << " km con " << NumPasajeros << " pasajeros." << endl;
        return distancia;
    } else {
        cout << "El automóvil no puede avanzar. Verifique si hay suficiente gasolina o si requiere mantenimiento." << endl;
        return -1;
    }
}

void capacidad::llenaTanque() {
    float gasolinaNecesaria = capacidadT - gasolinaT;

    if (gasolinaNecesaria > 0) {
        gasolinaT = capacidadT;
        cout << "Se han añadido " << gasolinaNecesaria << " litros de gasolina." << endl;
        cout << "Tanque lleno." << endl;
    } else {
        cout << "El tanque ya está lleno o contiene más gasolina de lo permitido." << endl;
    }
}

void capacidad::validaGasolinaEnTanque() {
    while (gasolinaT > capacidadT) {
        cout << "No es posible que la gasolina del automóvil exceda la capacidad del tanque." << endl;
        setCapacidadTanque();
        setGasolinaEnTanque();
    }
}
