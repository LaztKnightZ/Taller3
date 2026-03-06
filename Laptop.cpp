#include "Laptop.h"

Laptop::Laptop(string m, string mod, double p, int a)
    : Dispositivo(m, mod, p) {
    anosUso = a;
}

double Laptop::calcularValorActual() {

    double depreciacion = 0.15 * anosUso;

    double valor = precioBase - (precioBase * depreciacion);

    if (valor < 0)
        valor = 0;

    return valor;
}

void Laptop::mostrarDetalles() {

    Dispositivo::mostrarDetalles();

    cout << "Tipo: Laptop" << endl;
    cout << "Años de uso: " << anosUso << endl;
    cout << "Valor actual: " << calcularValorActual() << endl;
}
