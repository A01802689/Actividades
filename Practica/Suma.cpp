#include <iostream>
#include "Suma.h"


Sum::Sum(){
    suma=0.0;
}

 float sumar(const operaciones& objeto) {
        const float* nums = objeto.getNumeros();
        
        for (int i = 0; i < 5; i++) {
            suma += nums[i];
        }
        return suma;
    }
