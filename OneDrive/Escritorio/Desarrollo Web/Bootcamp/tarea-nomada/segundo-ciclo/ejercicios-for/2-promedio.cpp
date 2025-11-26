// Encuentra el promedio de N números.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int cantidad;
    double promedio, numero = 0.00;

    cout << "Ingresa la cantidad de números a promediar: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i ++){
        double aux = numero;

        cout << i << ".- ";
        cin >> numero;

        numero += aux;
    }

    promedio = numero / cantidad;

    cout << "El promedio es: " << promedio << endl;


    return 0;
}