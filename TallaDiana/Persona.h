// Persona.h
#ifndef PERSONA_H
#define PERSONA_H

class Persona {
private:
    float estaturaP;
    float estaturaM;
    char sexo;

public:
    Persona();
    void setEstaturaPapa();
    void setEstaturaMama();
    void setSexo();

    float getEstaturaPapa();
    float getEstaturaMama();
    char getSexo();

    float calculaEstatura();
    void imprimeEstatura();
};

#endif
