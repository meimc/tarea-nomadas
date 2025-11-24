// Si las vocales se representan con números del 1 al 5, lea un número y diga qué vocal es

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int vocal;

    cout << "Ingresa el número de vocal que deseas\n 1. A\n 2. E\n 3. I\n 4. O\n 5. U"<< endl;
    cin >> vocal;

    if (cin.fail()){
        cout << "Error: Dato inválido.";
    } 

    switch (vocal)
    {
    case 1: cout << "La vocal es A."; break;
    case 2: cout << "La vocal es E."; break;
    case 3: cout << "La vocal es I."; break;
    case 4: cout << "La vocal es O."; break;
    case 5: cout << "La vocal es U."; break;
    default: cout << "Error, ingrese un valor del 1 al 5."; break;
    }
    return 0;
}