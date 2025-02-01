#ifndef RESERVACION_H
#define RESERVACION_H

#include <iostream>
using namespace std;

class reserva {
private:
    string NomLocal;
    int NumLocal;
    int TelefonoLocal;
   

public:
    void setLocal(string NameLocal, int NumberLocal, int CellLocal);
    string getNombreLocal();
    int getNumLocal();
    int getTelefonoLocal();
    void mostarInfo();
    void Local();

    int Opcion();
    void Imprimir();
};

#endif
