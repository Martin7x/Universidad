#ifndef SALDOALVAREZ_H_INCLUDED
#define SALDOALVAREZ_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

void agregarSaldoMartin() {
    double monto;
    cout << "Ingrese el monto a agregar: $";
    cin >> monto;

    if (monto > 0) {
        saldo += monto;
        cout << "Saldo actualizado: $" << saldo << endl;
    } else {
        cout << "Monto invalido. Intente nuevamente." << endl;
    }
}
void verificarSaldoMartin() {
    cout << "Saldo disponible en la maquina de Martin: $" << saldo << endl;
}
#endif // SALDOALVAREZ_H_INCLUDED
