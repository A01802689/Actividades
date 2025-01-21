#include "Persona.h"
#include <vector>
#include <iostream>

#ifndef KINDER_H
#define KINDER_H

using namespace std;
class Kinder
{
    private:
        
         vector <Persona> k; 

    public:
        Kinder();
        void setDatosVector();
        void imprimeVector();
        virtual ~Kinder();
};

#endif 

