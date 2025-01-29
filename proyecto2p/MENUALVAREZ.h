#ifndef MENUALVAREZ_H_INCLUDED
#define MENUALVAREZ_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

const int NUM_PRODUCTOS = 5;
string productos[NUM_PRODUCTOS] = {"Agua", "Refresco", "Galletas", "Chocolate", "Papas"};
double precios[NUM_PRODUCTOS] = {1.00, 1.50, 2.00, 2.50, 3.00};
int inventario[NUM_PRODUCTOS] = {10, 8, 5, 7, 4};
double saldo = 0.0;

void mostrarMenuMartin() {
    cout << "=== Maquina Expendedora ===" << endl;
    cout << "1. Ingresar saldo" << endl;
    cout << "2. Comprar producto" << endl;
    cout << "3. Verificar saldo restante" << endl;
    cout << "4. Consultar inventario" << endl;
    cout << "5. Ingresar productos y precios" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

#endif // MENUALVAREZ_H_INCLUDED
