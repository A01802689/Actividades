#ifndef USUARIO_H
#define USUARIO_H
#include <string>
using namespace std;

class Usuario{

    private:

    string nombre;
    string correo;
    char registro;
    int edad;

    public:

    Usuario();
    void setNombre();
    string getNombre();

    void setEdad();
    int getEdad();

    void setCorreo();
    string getCorreo();
    
    void Registro();


};
#endif