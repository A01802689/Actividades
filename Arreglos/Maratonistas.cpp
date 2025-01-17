#include "Maratonistas.h"

using namespace std;

Maratonistas::Maratonistas()
{
    tam = 0;
}

Maratonistas::~Maratonistas()
{
    // Destructor
}

void Maratonistas::setTam()
{
    cout << "¿Cuántos corredores son? ";
    cin >> tam;
}

int Maratonistas::getTam()
{
    return tam;
}

void Maratonistas::setDatosMaraton()
{
    for (int i = 0; i < tam; i++) {
        cout << "Corredor " << i + 1 << ":" << endl;
        M[i].setNombre();
        M[i].setKms();
        M[i].calculaPromedioC();
        // M[i].imprime(); // Se puede descomentar si deseas imprimir en este punto
    }
}

float Maratonistas::calculaPromedioKmM()
{
    float suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += M[i].getPromKm();
    }
    return suma / tam;
}
