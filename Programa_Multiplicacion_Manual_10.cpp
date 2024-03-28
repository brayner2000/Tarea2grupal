#include <iostream>

using namespace std;

void dibujar_multiplicacion(int multiplicando, int multiplicador) {
    // Dibujar el multiplicando y el multiplicador
    cout << "    " << multiplicando << endl;
    cout << "x   " << multiplicador << endl;
    cout << "----------" << endl;

    // Calcular la longitud del resultado
    int resultado = multiplicando * multiplicador;
    int longitud_resultado = to_string(resultado).length();

    // Dibujar la l�nea superior de la multiplicaci�n
    cout << " ";
    for (int i = 0; i < longitud_resultado + 1; ++i) {
        cout << "-";
    }
    cout << endl;

    // Dibujar las l�neas intermedias de la multiplicaci�n
    for (int i = 0; i < to_string(multiplicador).length(); ++i) {
        cout << " ";
    }
    cout << "|";
    for (int i = 0; i < longitud_resultado; ++i) {
        cout << " ";
    }
    cout << endl;

    // Dibujar el resultado
    cout << " " << resultado << endl;
}

int main() {
    int multiplicando, multiplicador;

    // Solicitar al usuario que ingrese el multiplicando y el multiplicador
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicando;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;

    // Dibujar la multiplicaci�n
    dibujar_multiplicacion(multiplicando, multiplicador);

    return 0;
}
