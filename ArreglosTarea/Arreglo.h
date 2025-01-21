#ifndef ARREGLO_H
#define ARREGLO_H

class avion {
private:
    int PesoAviones[50]; 
public:
    
    avion();

    // Métodos
    void llenarArreglo(int min, int max);
    void mostrarPesos() const;


    void calcularDispersiones(double &varianza, double &desviacionEstandar) const;
    void consultarAvion() const;
    void cambiarPeso();
    void ordenarPesos();
};

#endif 

