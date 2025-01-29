#ifndef BIBLIO1_H_INCLUDED
#define BIBLIO1_H_INCLUDED

void mostrarMenuMartin() {
    cout << "======== Maquina Expendedora de Martin ========" << endl;
    cout << "Saldo disponible: $" << fixed << setprecision(2) << saldo << endl;
    cout << "Productos disponibles:" << endl;
    for (int i = 0; i < numProductos; i++) {
        cout << i + 1 << ". " << nombres[i]
             << " - $" << fixed << setprecision(2) << precios[i]
             << " - Cantidad: " << cantidades[i] << endl;
    }
    cout << numProductos + 1 << ". Agregar Saldo" << endl;
    cout << numProductos + 2 << ". Salir" << endl;
}

#endif // BIBLIO1_H_INCLUDED
