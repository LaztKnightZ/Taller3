#include "Servidor.h"

Servidor::Servidor(string m, string mod, double p, int h)
    : Dispositivo(m, mod, p) {

    horasOperativas = h;
}

double Servidor::calcularValorActual() {

    double depreciacion = horasOperativas * 0.00001;

    double valor = precioBase - (precioBase * depreciacion);

    if (valor < 0)
        valor = 0;

    return valor;
}

void Servidor::mostrarDetalles() {

    Dispositivo::mostrarDetalles();

    cout << "Tipo: Servidor" << endl;
    cout << "Horas operativas: " << horasOperativas << endl;
    cout << "Valor actual: " << calcularValorActual() << endl;
}
