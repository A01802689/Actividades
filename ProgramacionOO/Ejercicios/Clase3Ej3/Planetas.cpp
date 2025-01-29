#include "Planetas.h"
#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cin;
using std::cout;
using std::endl;


Planet::Planet(){
    edad=0;
    planeta=" ";
}
 void Planet::setEdad(){
  cout<<"Dame tu edad "<<endl;
  cin>>edad;

}
void Planet::setPlaneta(){
    cout<<"Elige un planeta"<<endl;
    cout<<" Venus o (V)"<<endl;
    cout<<" Marte o (M)"<<endl;
    cout<<" Jupiter o (J)"<<endl;
    cout<<"Mercurio o (M)"<<endl;
    cin>>planeta;

}
 int Planet::getEdad(){

    return edad;
 }

 string Planet::getPlaneta(){
    return planeta;
 }
int Planet::calculaEdad(){

    int Fedad=edad*365;

    if(planeta=="M" || planeta == "Marte"){
       
       return Fedad/88;
    }

    else if(planeta=="V" || planeta =="Venus"){
        return Fedad/225;
    }
    else if(planeta=="J" || planeta=="Jupiter"){
        return Fedad/4380;
    }
    else if(planeta=="S" || planeta=="Saturno"){
        return Fedad/10767;
    }
    else{

        cout<<"No elegiste un planeta correcto"<<endl;
    } 

    return Fedad;
}

void Planet::imprimeResultado(){

    cout<<"tu edad en "<<planeta<<" seria de "<< calculaEdad()<<endl;
}
