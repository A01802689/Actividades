#include "Ganancia.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    Ganancia Objeto1;

    float invertir;
    float interes;
    float anos;


    cout<<"Cuanto dinero quieres invertir"<<endl;
    cin>>invertir;

    cout<<"Dame la tasa de interes"<<endl;
    cin>>interes;

    cout<<"Por cuantos años dejarias el dinero?"<<endl;
    cin>>anos;

    Objeto1.setDatos(invertir, interes, anos);
    Objeto1.Resultado();


    return 0;
}