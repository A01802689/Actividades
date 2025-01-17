#include "Corredor.h"

using namespace std;

Corredor::Corredor()
{
    nombre = " ";
    tam = 7;
    promKm = 0;

    for (int i = 0; i < tam; i++) {
        kms[i] = 0;
    }
}

Corredor::~Corredor()
{
    // Destructor
}

void Corredor::setNombre()
{
    cout << "Captura el nombre: ";
    cin >> nombre;
}

void Corredor::setTam()
{
    tam = 7;
}

void Corredor::setKms()
{
    cout << "Captura los kms por día del corredor:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << "Día " << i + 1 << ": ";
        cin >> kms[i];
    }
}

string Corredor::getNombre()
{
    return nombre;
}

int Corredor::getTam()
{
    return tam;
}

void Corredor::calculaPromedioC()
{
    float suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += kms[i];
    }
    promKm = suma / tam;
}

float Corredor::getPromKm()
{
    return promKm;
}

void Corredor::imprime()
{
    cout << "Nombre de corredor: " << nombre << endl;
    cout << "Kms recorridos por día: ";
    for (int i = 0; i < tam; i++) {
        cout << "[" << kms[i] << "] ";
    }
    cout << endl;
    cout << "Promedio de kms recorridos por semana: " << promKm << endl;
}
