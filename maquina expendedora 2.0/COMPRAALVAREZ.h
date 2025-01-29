#ifndef COMPRAALVAREZ_H_INCLUDED
#define COMPRAALVAREZ_H_INCLUDED
#include <iostream>

using namespace std;

void procesarCompraMartin(int opcion) {
    int indice = opcion - 1;

    if (cantidades[indice] <= 0) {
        cout << "Lo siento, no hay " << nombres[indice] << " disponibles." << endl;
        return;
    }

    if (saldo < precios[indice]) {
        cout << "Saldo insuficiente. Por favor, agregue mas saldo." << endl;
        return;
    }

    saldo -= precios[indice];
    cantidades[indice]--;
    cout << "Gracias por su compra Aqui tiene su " << nombres[indice] << "." << endl;
    cout << "Saldo restante: $" << saldo << endl;
}


#endif // COMPRAALVAREZ_H_INCLUDED
