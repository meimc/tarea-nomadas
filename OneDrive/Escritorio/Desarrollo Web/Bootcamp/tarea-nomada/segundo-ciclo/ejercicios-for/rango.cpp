// Ingresa N numeros y contar cuantos estan en el ganto de 10 a 50, es decir, entre 10 y 50 inclusive.
// Validar que N sea mayor o igual a 1.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int cantidad, numero = 0, contador = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    if (cantidad < 1){
        cout << "Error. Al menos debe ser un número.";
    }

    for (int i = 1; i <= cantidad; i++){
        cout << i << ".- ";
        cin >> numero;
        if (numero >= 10 && numero <=50){
            contador++;
        }
    }
    cout << "La cantidad de números entre 10 y 50 es: " << contador;
    return 0;
}