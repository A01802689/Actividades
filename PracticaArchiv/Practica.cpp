#include "Practica.h"
#include <iostream>
#include <fstream>

using namespace std;

void Archiv::escribirEnArchivo() { //El nombre archivo s elo damos asi, creamos un objeto llamado archivo de tipo ofstream  
    ofstream archivo("Hola.sal", ios::app); // Abre el archivo en modo agregar, Append

    if (!archivo) {
        cerr << "Error al abrir el archivo!" << endl;
        return;
    }

    string mensaje;
    cout << "Escribe tu saludo: ";
    getline(cin, mensaje); // Leer la línea completa del usuario

    archivo << mensaje << endl; // Escribir en el archivo
    archivo.close(); // Cerrar el archivo

    cout << "Mensaje guardado" << endl;
}
