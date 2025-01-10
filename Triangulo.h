#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo {
private:
    float base, altura;

public:
    // Constructor
    Triangulo();

    // Métodos accesores y modificadores
    void set_Base();
    float get_Base();

    void set_Altura();
    float get_Altura();

    // Métodos especializados
    float calculaArea();

    void imprimeArea();
};

#endif
