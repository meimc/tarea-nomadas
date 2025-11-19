//6. Lee tres números que representen el día, el mes y el año, y di si forman una fecha correcta. Considera años bisiestos.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int day, month, year;

    cout << "Ingresa una fecha con números en el orden día (1 - 31), mes (1 - 12) y año" << endl;
    cin >> day >> month >> year;

    if ( day < 1 || day > 31){
        cout << "Inexistente, coloque un día del 1 al 31";
        return 0;
    }

    if ( month < 1 || month > 12){
        cout << "Inexistente, coloque un mes del 1 al 12";
        return 0;
    }

    if ( year < 0){
        cout << "Inexistente, coloque un año a partir del 0";
        return 0;
    }

    switch (month){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day <= 31) cout << "Fecha correcta!";
        break;
        case 2: 
            if (day == 29 && (year%400 == 0 || (year%4 == 0 && year%100 != 0))){
                cout << "Fecha correcta!";
            } else if (day == 29){
                cout << "Inexistente, no es año bisiesto.";
            } else if (day > 29){
                cout << "Inexistente, Febrero sólo tiene 28 días o 29 si es bisiesto.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day <= 30) cout << "Fecha correcta!";
            else cout << "Este mes sólo tienen 30 días";
        break;
        default: cout << "Inexistente, coloca el mes con un número del 1 al 12, por favor.";
    }


    return 0;
}