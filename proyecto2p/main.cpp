#include <iostream>
#include <string>
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\proyecto2p\MENUALVAREZ.h"
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\proyecto2p\SALDOALVAREZ.h"
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\proyecto2p\COMPRARALVAREZ.h"
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\proyecto2p\INVENTARIOALVAREZ.h"
#include "C:\Users\Marti\OneDrive\Desktop\Universidad\Codigos\proyecto2p\INGRESARALVAREZ.h"
using namespace std;

int main() {
    int opcion;

    do {
        mostrarMenuMartin();
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarSaldoMartin();
                break;
            case 2:
                comprarProductoMartin();
                break;
            case 3:
                verificarSaldoMartin();
                break;
            case 4:
                consultarInventarioMartin();
                break;
            case 5:
                ingresarProductosMartin();
                break;
            case 6:
                cout << "Gracias por usar la maquina expendedora de Martin. Hasta luego" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 6);

    return 0;
}
