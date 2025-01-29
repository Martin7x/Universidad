#ifndef MENUMARTIN_H_INCLUDED
#define MENUMARTIN_H_INCLUDED
#include <iostream>

using namespace std;

const int numProductos = 3;
string nombres[numProductos] = {"Aguas", "Chocolates", "Chicles"};
double precios[numProductos] = {0.50, 0.40, 0.30};
int cantidades[numProductos] = {5, 10, 8};
double saldo = 0.0;
void mostrarMenuMartin() {
    cout << "======== Maquina Expendedora de Martin ========" << endl;
    cout << "Saldo disponible: $" << saldo << endl;
    cout << "Productos disponibles:" << endl;
    for (int i = 0; i < numProductos; i++) {
        cout << i + 1 << ". " << nombres[i]
             << " - $" << precios[i]
             << " - Cantidad: " << cantidades[i] << endl;
    }
    cout << numProductos + 1 << ". Agregar Saldo" << endl;
    cout << numProductos + 2 << ". Salir" << endl;
}

#endif // MENUMARTIN_H_INCLUDED
