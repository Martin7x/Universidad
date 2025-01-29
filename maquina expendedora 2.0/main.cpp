#include <iostream>
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\maquina expendedora 2.0\MENUMARTIN.h"
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\maquina expendedora 2.0\COMPRAALVAREZ.h"
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\maquina expendedora 2.0\SALDOALVAREZ.h"
using namespace std;

int main() {
    int opcion;

    while (true) {
        mostrarMenuMartin();

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == numProductos + 2) {
            cout << "Gracias por usar la maquina expendedora de Martin. ¡Adios!" << endl;
            break;
        }

        if (opcion == numProductos + 1) {
            agregarSaldoMartin();
        } else if (opcion >= 1 && opcion <= numProductos) {
            procesarCompraMartin(opcion);
        } else {
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    }

    return 0;
}
