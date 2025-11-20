//Lee un número e invierte sus cifras

#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    while (numero > 0) {
        int digito = numero % 10;        // Último dígito
        invertido = invertido * 10 + digito; // Se agrega al invertido
        numero /= 10;                    // Se elimina el último dígito
    }

    cout << "Numero invertido: " << invertido << endl;
    return 0;
}