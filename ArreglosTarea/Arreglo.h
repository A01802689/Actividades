#ifndef ARREGLO_H
#define ARREGLO_H

class avion {
private:
    int PesoAviones[50]; // Arreglo para almacenar 50 valores
public:
    
    avion();

    // Métodos
    void llenarArreglo(int min, int max);
    void mostrarPesos() const;

    // Calcular varianza y desviación estándar
    void calcularDispersiones(double &varianza, double &desviacionEstandar) const;
    void consultarAvion() const;
    void cambiarPeso();
    void ordenarPesos();
};

#endif 

