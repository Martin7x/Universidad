#ifndef COMPRARALVAREZ_H_INCLUDED
#define COMPRARALVAREZ_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

void comprarProductoMartin() {
    cout << "=== Productos Disponibles ===" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << i + 1 << ". " << productos[i] << " - $" << precios[i]
             << " (Cantidad: " << inventario[i] << ")" << endl;
    }

    int opcion;
    cout << "Seleccione un producto (1-" << NUM_PRODUCTOS << "): ";
    cin >> opcion;

    if (opcion < 1 || opcion > NUM_PRODUCTOS) {
        cout << "Opcion invalida. Intente nuevamente." << endl;
        return;
    }

    int indice = opcion - 1;

    if (inventario[indice] == 0) {
        cout << "Lo sentimos, el producto seleccionado esta agotado." << endl;
    } else if (saldo < precios[indice]) {
        cout << "Saldo insuficiente para comprar " << productos[indice] << "." << endl;
    } else {
        saldo -= precios[indice];
        inventario[indice]--;
        cout << "Gracias por su compra, Ha adquirido " << productos[indice] << " en la maquina de Martin." << endl;
        cout << "Saldo restante: $" << saldo << endl;
    }
}


#endif // COMPRARALVAREZ_H_INCLUDED
