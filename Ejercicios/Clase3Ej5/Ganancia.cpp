#include "Ganancia.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

Ganancia::Ganancia(){
    inver=0;
    inter=0;
    tiempo=0;

}

void Ganancia::setDatos(float x, float y, float z){
    inver=x;
    inter=y;
    tiempo=z;

}
float Ganancia::getInver(){
    return inver;

}

float Ganancia::getInter(){
    return inter;

}
float Ganancia::getTiempo(){
    return tiempo;
}

float Ganancia::Operaciones(){
     
    float Total = (inver * (1 - pow((inter / 100), tiempo + 1))) / (1 - (inter / 100));
     return Total;

}
void Ganancia::Resultado(){

   cout<<"La ganancia total seria de: " << Operaciones() << endl;

}