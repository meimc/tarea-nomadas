//Si dos números son positivos, calcule su producto; si no lo son, calcule su suma.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double numero1, numero2, resultado = 0.00;

    cout << "Ingresa dos números" << endl;
    cin >> numero1 >> numero2;

    if (cin.fail()) {
        cout << "Error: Ingrese un valor numérico.";
        return 0;
    }

    if (numero1 < 0 && numero2 < 0){
        resultado = numero1 * numero2;
    } else {
        resultado = numero1 + numero2;
    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}