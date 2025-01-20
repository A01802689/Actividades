#include <iostream>
#include "Corredor.h"
#include "Maratonistas.h"

using namespace std;

int main(){
    Maratonistas Mar;
    
    Mar.setTam();  // Esta llamada es la que ejecuta el mensaje
    Mar.setDatosMaraton();
    cout << "El promedio de los corredores es: " << Mar.calculaPromedioKmM() << endl;

    return 0;
}

