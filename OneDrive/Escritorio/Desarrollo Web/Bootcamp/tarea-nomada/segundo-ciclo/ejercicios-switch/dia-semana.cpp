//1. Escribe un programa que lea un número entre 1 y 7, y que muestre el nombre del día de la semana correspondiente.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int dia=0;

    cout << "Dime qué número de día de la semana es hoy: ";
    cin >> dia;

    switch (dia){
        case 1:
            cout << "Hoy es Lunes!";
            break;
        case 2:
            cout << "Hoy es Martes";
            break;
        case 3:
            cout << "Hoy es Miér...coles!";
            break;
        case 4:
            cout << "Hoy es Jueves";
            break;
        case 5:
            cout << "Hoy es Viernes!";
            break;
        case 6:
            cout << "Hoy es Sábado! 😁";
            break;
        case 7:
            cout << "Hoy es Domingo 😭";
            break;
    }

    return 0;
}