#ifndef INVENTARIOALVAREZ_H_INCLUDED
#define INVENTARIOALVAREZ_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

void consultarInventarioMartin() {
    cout << "=== Inventario de Martin ===" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << productos[i] << ": $" << precios[i] << " (Cantidad: " << inventario[i] << ")" << endl;
    }
}

#endif // INVENTARIOALVAREZ_H_INCLUDED
