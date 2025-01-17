#include <iostream>
#include "Corredor.h"
#include "Maratonistas.h"

using namespace std;


  /*  Corredor c[2];//Arreglo de objetos

    for(int i=0;i<2;i++){
        c[i].setNombre();
        c[i].setKms();
        c[i].calculaPromedioC();
        c[i].imprime();
    }
*/

int main(){
    Maratonistas Mar;
    
    Mar.setTam();  // Esta llamada es la que ejecuta el mensaje
    Mar.setDatosMaraton();
    cout << "El promedio de los corredores es: " << Mar.calculaPromedioKmM() << endl;

    return 0;
}