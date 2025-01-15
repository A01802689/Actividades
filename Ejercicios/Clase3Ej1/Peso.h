#ifndef PESO_H
#define PESO_H

class Peso{


private:

    float peso;
    float estatura;

public:
     Peso();
    void setPeso();
    void setEstatura();
    float getPeso();
    float getEstatura();
    float calculaIMC();
    void imprimeIMC();


};
#endif