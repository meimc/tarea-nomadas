//2. Crea un programa que simule un menú de opciones para realizar operaciones aritméticas simples: suma, resta, multiplicación, división y potencia.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int opcion = 0, calculo = 1;
    float numero1 = 0.00f, numero2 = 0.00f, suma = 0.00f, resta = 0.00f, division = 0.00f, multiplicacion = 0.00f;

    cout << "¿Qué operación deseas realizar?\n 1.- suma\n 2.- resta\n 3.- multiplicación\n 4.- división" << endl;
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "Ingresa el primer número: ";
            cin >> numero1;
            cout << "Ingresa el segundo número: ";
            cin >> numero2;
            suma = numero1 + numero2;
            cout << "El resultado de la suma es: " << suma << endl;
        break;
        case 2:
            cout << "Ingresa el primer número: ";
            cin >> numero1;
            cout << "Ingresa el segundo número: ";
            cin >> numero2;
            resta = numero1 - numero2;
            cout << "El resultado de la resta es: " << resta << endl;
        break;
        case 3:
            cout << "Ingresa el primer número: ";
            cin >> numero1;
            cout << "Ingresa el segundo número: ";
            cin >> numero2;
            multiplicacion = numero1 * numero2;
            cout << "El resultado de la multiplicación es: " << multiplicacion << endl;
        break;
        case 4:
            cout << "Ingresa el primer número: ";
            cin >> numero1;
            cout << "Ingresa el segundo número: ";
            cin >> numero2;
            division = numero1 / numero2;
            cout << "El resultado de la división es: " << division << endl;
        break;
        default:
            cout << "Opcion no válida";
        break;
    }


    return 0;
}