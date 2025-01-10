#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    private:
        float estaturaP;
        float estaturaM;
        char sexo;

    public:
        Persona();
        void setEstaturaPapa();
        void setEstaturaMama();
        void SetSexo();

        float getEstatutaPapa();
        float getEsaturaMama();
        char getSexo();

        float calculaEstatura();
        void imprimeEstatura(float e);

        virtual ~Persona();
};

#endif 