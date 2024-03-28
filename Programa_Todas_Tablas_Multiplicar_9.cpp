#include <iostream>

using namespace std;

int main() {
    // Iterar sobre los números del 1 al 10
    for (int i = 1; i <= 10; ++i) {
        cout << "Tabla de multiplicar del " << i << ":" << endl;
        // Iterar sobre los múltiplos del número actual (del 1 al 10)
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl; // Separador entre tablas
    }

    return 0;
}
