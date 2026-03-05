#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

#include <iostream>
#include <string>

using namespace std;

class Dispositivo {

protected:
    string marca;
    string modelo;
    double precioBase;

public:
    Dispositivo(string m, string mod, double p);

    virtual double calcularValorActual() = 0;

    virtual void mostrarDetalles();

    virtual ~Dispositivo();
};

#endif
