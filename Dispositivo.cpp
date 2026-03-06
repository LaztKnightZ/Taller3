#include "Dispositivo.h"

Dispositivo::Dispositivo(string m, string mod, double p) {
    marca = m;
    modelo = mod;
    precioBase = p;
}

void Dispositivo::mostrarDetalles() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Precio Base: " << precioBase << endl;
}

Dispositivo::~Dispositivo() {
}
