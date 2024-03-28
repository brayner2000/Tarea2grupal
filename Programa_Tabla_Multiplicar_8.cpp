#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número para ver su tabla de multiplicar: ";
    cin >> numero;

    // Imprimir la tabla de multiplicar del número ingresado
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
