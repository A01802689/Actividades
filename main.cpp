#include <iostream>
#include "Triangulo.h"
using std::cin;
using std::cout;

int main() {
    Triangulo objeto1;

    objeto1.set_Base();
    objeto1.set_Altura();

    cout << "El valor del área del primer triángulo es: ";
    objeto1.imprimeArea();

    return 0;
}
