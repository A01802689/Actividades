#include <iostream>
#include "Persona.h"

using std::cin;
using std::cout;
using std::endl;

int main(){

Persona objeto1;

objeto1.setSexo();
objeto1.setEstaturaPapa();
objeto1.setEstaturaMama();


objeto1.imprimeEstatura();
 
 return 0;
}