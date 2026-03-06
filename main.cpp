#include <iostream>
#include <vector>

#include "Laptop.h"
#include "Servidor.h"

using namespace std;

int main() {

    vector<Dispositivo*> inventario;

    inventario.push_back(new Laptop("Dell", "XPS13", 1500, 3));
    inventario.push_back(new Servidor("HP", "ProLiant", 5000, 20000));
    inventario.push_back(new Laptop("Lenovo", "ThinkPad", 1800, 2));
    inventario.push_back(new Servidor("IBM", "PowerSystem", 8000, 40000));

    cout << "===== Inventario de Activos =====" << endl;

    for (int i = 0; i < inventario.size(); i++) {

        cout << endl;
        inventario[i]->mostrarDetalles();
    }

    for (int i = 0; i < inventario.size(); i++) {
        delete inventario[i];
    }

    return 0;
}
