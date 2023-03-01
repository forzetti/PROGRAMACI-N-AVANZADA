//Taller 1
//punto 1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// 2. Crear una función para generar números aleatorios entre 0 y 25
int generarNumeroAleatorio() {
    return rand() % 26;
}

int main() {
    // 1. Crear un array con 10 elementos
    int miArray[10];

    // 3.Llenar el array con 10 números aleatorios
    srand(time(NULL)); // Semilla para generar números aleatorios
    for (int i = 0; i < 10; i++) {
        miArray[i] = generarNumeroAleatorio();
    }

    // 4. Crear un puntero
    int *miPuntero;
    miPuntero = & miArray[0];

    // 5. Imprimir el contenido del array usando el puntero
    for (int i = 0; i < 10; i++) {
        cout << *(miPuntero + i) << " ";
    }
    cout << endl;

    // 6. Imprimir las direcciones del contenido del array usando el puntero
    for (int i = 0; i < 10; i++) {
        cout << (miPuntero + i) << " ";
    }
    cout << endl;

    return 0;
}