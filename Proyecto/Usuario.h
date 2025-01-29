#ifndef USUARIO_H
#define USUARIO_H
#include <string>
using namespace std;

class Usuario {
private:
    string nombre;
    string correo;
    char registro;
    int edad;
    char Opcion;

public:
    Usuario();

    void setNombre();
    string getNombre();

    void setEdad();
    int getEdad();

    void setCorreo();
    string getCorreo();

    char getOpcion();

    void Registro();
};

#endif
