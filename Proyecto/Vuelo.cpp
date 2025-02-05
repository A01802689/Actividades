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
    recorrer=0.0;
    TotalKm=0.0;
    TotalPrecio=0.0;
    EleccionSN=' ';


}

void vuelo::setDatos(int num, string nombre,int Humano, float cost, string dest, float dur, float Kilome) {
    
    NumVuelo = num;
    nombreAvion = nombre;
    pasajeros=Humano;
    precio = cost;
    destino = dest;
    duracion = dur;
    Kilometros= Kilome;
    CuantosAsientos=0;   

}

void vuelo::gestionarVuelos() {

Usuario ObjetoPersona;
cout<<"Quieres hacer tu registro? (s/n)"<<endl;
cin>>EleccionSN;

if (EleccionSN=='n' || EleccionSN=='N'){

    cout<<"Ocuparas el registro mas adelante......."<<endl;
}

else if(EleccionSN=='s' || EleccionSN=='S'){
    ObjetoPersona.Registro();
}
else{
    cout<<"Elige una opcion VALIDA"<<endl;
}

    vuelo aviones[5];// de la clase vuelo cree una arreglo llamado aviones

    aviones[0].setDatos(1, "Boeing 747", 80, 500.0, "Nueva York", 6.5, 33000);
    aviones[1].setDatos(2, "Airbus A320", 200, 350.0, "Los Ángeles", 5.0, 25000);
    aviones[2].setDatos(3, "Boeing 777", 50, 700.0, "Londres", 8.2, 15000);
    aviones[3].setDatos(4, "Concorde", 145, 1000.0, "París", 3.5, 40000);
    aviones[4].setDatos(5, "Embraer E190",98,  280.0, "Madrid", 4.7, 15000);
        for (int i = 0; i < 5; i++) {
        aviones[i].mostrarInfo();
    }
int eleccion=0;

do {
    cout << "Elige el número de vuelo que quieras (1-5): " << endl;
    cin >> eleccion;

    if (eleccion < 1 || eleccion > 5) {
        cout << "Número de vuelo inválido. Inténtalo de nuevo." << endl;
    }

    } while (eleccion < 1 || eleccion > 5);


    cout<<"Cuantos asinetos ocupas...."<<endl;
    cin>>CuantosAsientos;

    if (aviones[eleccion - 1].pasajeros+CuantosAsientos > 200) {
        cout << "El avión está lleno, elige otra opción" << endl;
        return gestionarVuelos();

    }else{
    
       setComprobacionKm(); 

            TotalKm = aviones[eleccion - 1].Kilometros + getComprobacionKm();
            TotalPrecio = aviones[eleccion - 1].precio * CuantosAsientos; 

    
            if (TotalKm >= 40000) {
                cout << "SE APLICO UN DESCUENTO DEL 40%" << endl;
                TotalPrecio *= 0.6; 
            } else {
                cout << "No es aplicable el descuento" << endl;
            }

         
            aviones[eleccion - 1].Kilometros = TotalKm;
            aviones[eleccion - 1].pasajeros += CuantosAsientos;
            aviones[eleccion - 1].precio = TotalPrecio;


        if (EleccionSN == 'n' || EleccionSN == 'N') {
         do {
            cout << "Es obligatorio que hagas tu registro, sino tu reserva NO será guardada." << endl;
            cout << "¿Quieres hacer tu registro? (s/n)" << endl;
            cin >> EleccionSN;
        } while (EleccionSN != 'S' && EleccionSN != 's');

        ObjetoPersona.Registro();
        }

            cout<<" ----------Información de tu vuelo actualizado:-----------" << endl;
            cout<<endl;
            cout<<"Usuario: "<<ObjetoPersona.getNombre()<<endl;
            cout<<"Edad: "<<ObjetoPersona.getEdad()<<endl;
            cout<<"Correo: "<<ObjetoPersona.getCorreo()<<endl;
            aviones[eleccion-1].mostrarInfo();
        
    }
}


void vuelo::mostrarInfo() {
    cout << "Número de vuelo: " << NumVuelo << endl;
    cout << "Nombre del avión: " << nombreAvion << endl;
    cout<< "Numero de pasajeros Totales: "<<pasajeros<<endl;
    cout << "Precio total del vuelo: $" << precio <<endl;
    cout << "Destino: " << destino << endl;
    cout << "Duración del vuelo: " << duracion << " horas" << endl;
    cout<< "Se van a recorrer: "<<Kilometros<<" Kilometros de distancia"<<endl;
    cout << endl;
}


void vuelo::setComprobacionKm(){
    cout<<"Cauntos kilometros has recorrido anterirormente...."<<endl;
    cin>>recorrer;
 }

 float vuelo::getComprobacionKm(){
    return recorrer;
 }


 void vuelo::Impresion(){
    gestionarVuelos();
 }
