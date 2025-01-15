#ifndef PLANETA_H
#define PLANETA_H
#include <string>
using std::string;

class Planet {
private:
    int edad;
    string planeta;

public:
    Planet();
    void setEdad();
    void setPlaneta();

    string getPlaneta();
    int getEdad();

    int calculaEdad();
    void imprimeResultado();
};

#endif
