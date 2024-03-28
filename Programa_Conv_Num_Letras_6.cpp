#include <iostream>
#include <map>

using namespace std;

// Función para convertir unidades a letras
string convertir_unidades(int numero) {
    string unidades[] = {"Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
    return unidades[numero];
}

// Función para convertir números especiales (del 11 al 19) a letras
string convertir_especiales(int numero) {
    map<int, string> especiales = {{11, "Once"}, {12, "Doce"}, {13, "Trece"}, {14, "Catorce"}, {15, "Quince"}, {16, "Dieciséis"},
                                    {17, "Diecisiete"}, {18, "Dieciocho"}, {19, "Diecinueve"};
    return especiales[numero];
}

// Función para convertir decenas a letras
string convertir_decenas(int numero) {
    string decenas[] = {"", "Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};
    return decenas[numero];
}

// Función principal para convertir números enteros a letras
string convertir_a_letras(int numero) {
    if (numero < 10) {
        return convertir_unidades(numero);
    } else if (numero < 20) {
        return convertir_especiales(numero);
    } else {
        int unidad = numero % 10;
        int decena = numero / 10;
        if (unidad == 0) {
            return convertir_decenas(decena);
        } else {
            return convertir_decenas(decena) + " y " + convertir_unidades(unidad);
        }
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entero entre 0 y 99: ";
    cin >> numero;

    if (numero >= 0 && numero <= 99) {
        cout << "El número en letras es: " << convertir_a_letras(numero) << endl;
    } else {
        cout << "El número debe estar entre 0 y 99." << endl;
    }

    return 0;
}
