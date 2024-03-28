#include <iostream>
#include <map>
#include <string>

using namespace std;

// Función para convertir unidades a letras
string convertir_unidades(int numero) {
    string unidades[] = {"Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
    return unidades[numero];
}

// Función para convertir números especiales (del 11 al 19) a letras
string convertir_especiales(int numero) {
    map<int, string> especiales = {{11, "Once"}, {12, "Doce"}, {13, "Trece"}, {14, "Catorce"}, {15, "Quince"}, {16, "Dieciséis"},
                                    {17, "Diecisiete"}, {18, "Dieciocho"}, {19, "Diecinueve"}};
    return especiales[numero];
}

// Función para convertir decenas a letras
string convertir_decenas(int numero) {
    string decenas[] = {"", "Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};
    return decenas[numero];
}

// Función para convertir números enteros a letras
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

// Función para convertir parte decimal a letras
string convertir_decimal(string decimal) {
    string resultado = "";
    for (char &c : decimal) {
        int digito = c - '0';
        resultado += convertir_unidades(digito) + " ";
    }
    return resultado;
}

int main() {
    double numero;
    cout << "Ingrese un número con parte decimal: ";
    cin >> numero;

    // Separar la parte entera y la parte decimal
    int parte_entera = static_cast<int>(numero);
    double parte_decimal = numero - parte_entera;

    // Convertir la parte entera a letras
    string resultado_entero = convertir_a_letras(parte_entera);

    // Convertir la parte decimal a letras
    string resultado_decimal = convertir_decimal(to_string(parte_decimal).substr(2)); // Ignorar el "0." al inicio

    cout << "El número en letras es: " << resultado_entero << " con " << resultado_decimal << " décimas" << endl;

    return 0;
}
