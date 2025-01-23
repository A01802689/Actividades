#include "Capacidad.h"
#include <iostream>

using namespace std;

 capacidad::capacidad(){

     anio= "Fecha desconocida"<<endl;
     Kilometraje= "Kilometraje desconocido"<<endl;
     puertas= "No se sabe el numero de puertas"<<endl;
     NumPasajeros= "No se sabe el numero de pasajeros"<<endl;
     rendimiento="No se sabe su rendimiento";
     capacidadT="No se sabe su capacidad"<<endl;
     gasolinaT= "No se sabe la cantidad de gasolina uqe tiene"<<endl;

 }

void capacidad:: NumPasajeros(){
    cout<<"Cuantos pasajeros hay: "<<endl;
    cin>>NumPasajeros;
}
int capacidad::NumPasajeros(){
    return NumPasajeros;
}
void capacidad::setAnio(){
    cout<<"De que año es el vehiculo: "<<endl;
    cin>>anio;
}
int capacidad::getAnio(){
    return anio;
}

void capacidad::setKilometraje(){
    cout<<"Cuantos kilometros se van a recorrer "<<endl;
    cin>>Kilometraje;
}
float capacidad::getKilometraje(){
    return kilometraje;
}

void capacidad::setNumPuertas(){
    cout<<"Cuantas puertas tiene el vehiculo: "<<endl;
    cin>>puertas;
}
int capacidad::getNumPuertas(){
    return puertas;
}

void capacidad::setRendimiento(){
    cout<<"Cual es le rendimiento del vehiculo: "<<endl;
    cin>>rendimiento;
}
float capacidad::getRendimiento(){
    return rendimiento;
}

void capacidad::setCapacidadTanque(){
    cout<<"Cual es la capacidad de tanque: "<<endl;
    cin>>capacidadT;
}
float capacidad::getCapacidadTanque(){
    return capacidadT;
}

void capacidad::setGasolinaEnTanque(){
    cout<<"Cuanta gasolina tiene el vehiculo: "<<endl;
    cin>>gasolinaT;
}
float capacidad::getGasolinaEnTanque(){
    return gasolinaT;
}


///////////////////////////////////////////////////////////////////////////////////

float capacidad::requiereMantenimiento(){


}

float capacidad::CalculaConsumo(){

}
void capacidad::validaGasolinaEnTanque() {

    do {
        cout << "Comprobación de Gasolina:" << endl;
        
        if (gasolinaT > capacidadT) {
            cout << "No es posible que la gasolina del automóvil exceda la capacidad del tanque." << endl;
            setCapacidadTanque(); 
            setGasolinaEnTanque(); 
        }

    } while (gasolinaT > capacidadT);
}



float capacidad::AvanzaAutomovil();

float capacidad::llenaTanque();

