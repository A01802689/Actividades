#ifndef AUTO_H
#define AUTO_H
#include <string>
#include<vector>
#include "Capacidad.h"
using namespace std;


class Carro{

private:
   
   vector<capacidad> Datos;

    string marca;
    string modelo;
    string color;

public:

    Carro();
    void setMarca();
    string getMarca();

    void setModelo();
    string getModelo();

    void setColor();
    string getColor();

    void ImprimeAutovil();

};
#endif