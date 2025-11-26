// Calcula el área máxima de un terreno si las longitudes son X y (20 - X)
// A = X(20-X)
// El cálculo se hará hasta que el usuario ingrese un número negativo.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double longitud, area = 0, areaMax = 0;
    cout << "Ingresa la longitud X: ";
    cin >> longitud;

    if (cin.fail()){
        cout << "Error. Ingresa un valor numérico";
        return 0;
    }

    if ( longitud <= 0 || longitud >= 20){
        cout << "Error. Ingresa un valor entre 1 y 19." << endl;
        return 0;
    } else {
        do {
            area = longitud*(20-longitud);
            cout << "El área es: " << area << endl;

            if (area > areaMax) areaMax = area;

            cout << "Ingresa la longitud X: ";
            cin >> longitud;
            
        }while(longitud >= 0 && longitud <= 20);
    }
    
    cout << "El área máxima es: " << area;

    return 0;
}