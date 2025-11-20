// Indicar si un número es primo. 

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero;
    bool esPrimo = true; // bandera o flag

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero < 2){
        esPrimo = false;
    } else {
        int i = 2;
        while (i < numero) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
            i++;
        }
    }

    if (esPrimo) {
        cout << numero << " es primo" << endl;
    } else {
        cout << numero << " no es primo" << endl;
    }

    return 0;
}