#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double numero1, numero2;

    cout << "Ingresa un número cualquiera: ";
    cin >> numero1;
    cout << "Ingresa otro número cualquiera: ";
    cin >> numero2;

    if (numero1>=0 && numero2>=0) cout << "Los números son positivos y su producto es " << numero1*numero2;
    else cout << "Al menos uno es positivo y su suma es " << numero1+numero2;

    return 0;
}