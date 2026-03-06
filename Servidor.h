#ifndef SERVIDOR_H
#define SERVIDOR_H

#include "Dispositivo.h"

class Servidor : public Dispositivo {

private:
    int horasOperativas;

public:
    Servidor(string m, string mod, double p, int h);

    double calcularValorActual();

    void mostrarDetalles();
};

#endif
