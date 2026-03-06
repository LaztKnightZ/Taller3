#ifndef LAPTOP_H
#define LAPTOP_H

#include "Dispositivo.h"

class Laptop : public Dispositivo {

private:
    int anosUso;

public:
    Laptop(string m, string mod, double p, int a);

    double calcularValorActual();

    void mostrarDetalles();
};

#endif
