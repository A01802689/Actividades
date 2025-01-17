#ifndef MARATONISTAS_H
#define MARATONISTAS_H

#include "Corredor.h"

class Maratonistas
{
    private:
        Corredor M[10];
        int tam;

    public:
        Maratonistas();
        void setTam();
        int getTam();
        void setDatosMaraton();
        float calculaPromedioKmM();
        virtual ~Maratonistas();
};

#endif
