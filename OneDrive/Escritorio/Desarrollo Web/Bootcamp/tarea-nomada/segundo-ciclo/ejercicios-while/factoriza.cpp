// Factorizar un número ingresado por teclado.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num1, divisor = 2;

    cout << "Ingresa un número a factorizar";
    cin >> num1; 

    while (num1 > 1){
        while (num1 % divisor == 0){
            cout << divisor << " ";
            num1 /= divisor;
        }
        divisor++;
    }

    return 0;
}