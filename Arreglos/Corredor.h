#ifndef CORREDOR_H
#define CORREDOR_H

#include <iostream>
#include <string>

using namespace std;

class Corredor
{
    private:
        string nombre;
        int kms[7];
        int tam;
        float promKm;

    public:
        Corredor();
        void setNombre();
        void setTam();
        void setKms();

        string getNombre();
        int getTam();
        float getPromKm();
        void calculaPromedioC();
        void imprime();
        virtual ~Corredor();
};

#endif
