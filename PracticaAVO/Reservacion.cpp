#include "Reservacion.h"

void reserva::setLocal(string NameLocal, int NumberLocal, int CellLocal) {
    NomLocal = NameLocal;
    NumLocal = NumberLocal;
    TelefonoLocal = CellLocal;
}

string reserva::getNombreLocal() {
    return NomLocal;
}

int reserva::getNumLocal() {
    return NumLocal;
}

int reserva::getTelefonoLocal() {
    return TelefonoLocal;
}

void reserva::mostarInfo() {
    cout << "Nombre del local: " << NomLocal << endl;
    cout << "Número del local: " << NumLocal << endl;
    cout << "Teléfono: " << TelefonoLocal << endl;
    cout<<endl;
    cout<<"-------------------------------------------------"<<endl;
}

void reserva::Local() {
    reserva ObjetoReserva[5];

    ObjetoReserva[0].setLocal("Pollos Hermanos", 122, 55634890);
    ObjetoReserva[1].setLocal("Pollo Loco", 105, 659806);
    ObjetoReserva[2].setLocal("Los Gueros", 134, 75634890);
    ObjetoReserva[3].setLocal("Mercado", 2, 85634890);
    ObjetoReserva[4].setLocal("Michoacana", 307, 95634890);
        for (int i = 0; i < 5; i++) {
        ObjetoReserva[i].mostarInfo();
    }

}


Opcion(reserva (&ObjetoReserva)[5]) {
    int opcion=0;
    cout<<"Elige un restaurante, eleigiendo un numero entre 1-5...."<<endl;
    cin>>opcion;

}



void Imprimir(){
    Usuario objetoU;
    objetoU.Registro();
    cout<<endl;

    Local();
    cout<<"Infromacion de tu registro............"<<endl;

    cout<<"Nomre: "<<objetoU.getNombre()<<endl;
    cout<<"Edad: "<<objetoU.getEdad()<< endl;
    cout<<"Correo: "<<objetoU.getCorreo()<<endl;


 
    cout<<"Se guardo su reserva......"



}