
#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario() {
    nombre = "Desconocido";
    correo = "Desconocido";
    registro = ' ';
    edad = 0;
    Opcion = ' ';
}

void Usuario::setNombre() {
    cout << "Dame tu nombre: ";
    cin>>nombre;
}

string Usuario::getNombre() {
    return nombre;
}

void Usuario::setEdad() {
    cout << "Dame tu edad: ";
    cin >> edad;
}

int Usuario::getEdad() {
    return edad;
}

void Usuario::setCorreo() {
    cout << "Ingrese su correo: ";
    cin >> correo;
}

string Usuario::getCorreo() {
    return correo;
}

void Usuario::Registro() {
    cout << "Bienvenido a nuestra página de reserva en línea" << endl;
    cout << "Haremos su registro..." << endl;
    setNombre();
    setEdad();
    setCorreo();
}

char Usuario::getOpcion() {
    do {
        cout << "¿Quiere hacer su registro ahora (s/n)? ";
        cin >> Opcion;

        if (Opcion == 's' || Opcion == 'S') {
            cout<<"Inicando registro"<<endl;
        } else if (Opcion == 'n' || Opcion == 'N') {
            cout << "No ha hecho su registro. Se ocupará después para reservar su vuelo";
        } else {
            cout << "Elija una opción válida." << endl;
        }
    } while (Opcion != 'n' && Opcion != 'N' && Opcion != 's' && Opcion != 'S');

    return Opcion;
}
