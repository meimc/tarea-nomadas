// Muestra una figura de asteriscos con validación (triángulo)

// Usuario ingresa un número N entre 1 y 10
// N = 5
/*
*
**
***
****
*****

For anidado, una para las filas y otro para las columnas
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int altura;

    cout << "Ingresa un número para la altura del triángulo: ";
    cin >> altura;

    if (cin.fail()){
        cout << "Error. Ingrese un número del 1 al 10.";
    }else if (altura < 1 || altura > 10){
        cout << "Error. Ingrese un valor del 1 al 10.";
    }

    for (int fila = 1; fila <= altura; fila++) {
        for (int col = 1; col <= fila; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}