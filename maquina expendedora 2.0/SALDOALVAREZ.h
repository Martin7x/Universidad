#ifndef SALDOALVAREZ_H_INCLUDED
#define SALDOALVAREZ_H_INCLUDED
#include <iostream>

using namespace std;

void agregarSaldoMartin() {
    double monto;
    cout << "Ingrese la cantidad de dinero que desea agregar: ";
    cin >> monto;

    if (monto <= 0) {
        cout << "El monto debe ser mayor a 0. Intente nuevamente." << endl;
        return;
    }

    saldo += monto;
    cout << "Saldo actualizado: $" << saldo << endl;
}

#endif // SALDOALVAREZ_H_INCLUDED
