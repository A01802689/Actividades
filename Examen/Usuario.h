#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
using namespace std;

class Usuario {
private:
    string nombre;
    float altura;
    int edad;
    float peso;

public:
    Usuario();
    void setNombre();
    string getNombre();
    void setAltura();
    float getAltura();
    void setEdad();
    int getEdad();  
    void setPeso();
    float getPeso();
};

#endif
