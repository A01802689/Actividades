#ifndef GANANCIAS_H
#define GANANCIAS_H

class Ganancia{

private:

float inver;
float inter;
float tiempo;

public:

Ganancia();

void setDatos(float x, float y, float z);

float getInver();
float getInter();
float getTiempo();

float Operaciones();

void Resultado();

};

#endif

