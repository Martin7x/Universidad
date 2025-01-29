#ifndef INGRESARALVAREZ_H_INCLUDED
#define INGRESARALVAREZ_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

void ingresarProductosMartin() {
    int opcion;
    cout << "=== Ingresar Productos y Precios en la maquina de Martin ===" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << i + 1 << ". " << productos[i] << endl;
    }
    cout << "Seleccione el numero del producto para modificar (1-" << NUM_PRODUCTOS << "): ";
    cin >> opcion;

    if (opcion < 1 || opcion > NUM_PRODUCTOS) {
        cout << "Opcion invalida. Intente nuevamente." << endl;
        return;
    }

    int indice = opcion - 1;
    cout << "Ingrese la nueva cantidad de " << productos[indice] << ": ";
    cin >> inventario[indice];

    if (inventario[indice] < 0) {
        cout << "Cantidad invalida. Intente nuevamente." << endl;
        return;
    }

    cout << "Ingrese el nuevo precio de " << productos[indice] << ": $";
    cin >> precios[indice];

    if (precios[indice] <= 0) {
        cout << "Precio invalido. Intente nuevamente." << endl;
        return;
    }

    cout << "Producto actualizado en la maquina de Martin: " << productos[indice] << " - $" << precios[indice] << " (Cantidad: " << inventario[indice] << ")" << endl;
}

#endif // INGRESARALVAREZ_H_INCLUDED
