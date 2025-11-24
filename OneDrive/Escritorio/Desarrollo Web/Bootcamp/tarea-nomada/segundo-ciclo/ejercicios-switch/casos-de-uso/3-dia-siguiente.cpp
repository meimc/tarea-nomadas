// 3. Dada una fecha válida, determina la fecha del día siguiente.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int day, month, year;

    cout << "Ingresa una fecha con números en el orden día (1 - 31), mes (1 - 12) y año" << endl;
    cin >> day >> month >> year;

    if ( year < 0){
        cout << "Inexistente, coloque un año a partir del 0";
        return 0;
    }

    if ( month < 1 || month > 12){
        cout << "Inexistente, coloque un mes del 1 al 12";
        return 0;
    }

    if ( day < 1 || day > 31){
        cout << "Inexistente, coloque un día del 1 al 31";
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
            day++;
            if (day > 31){
                if (month == 12){
                    month = 1;
                    year ++;
                } else {
                    month ++;
                }
                day = 1;
            }
        break;
        case 2: 
            if (day == 29 && (year%400 == 0 || (year%4 == 0 && year%100 != 0))){
                day = 1;
                month++;
            } else if (day < 29 && (year%400 == 0 || (year%4 == 0 && year%100 != 0))){
                day++;
            } else if (day == 29){
                cout << "Inexistente, no es año bisiesto.";
            } else if (day > 29){
                cout << "Inexistente, Febrero sólo tiene 28 días o 29 si es bisiesto.";
            } else {
                day++;
                if (day > 28){
                day = 1;
                month++;
                }
            }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            day++;
            if (day > 30){
                day = 1;
                month ++;
            }
        break;
        default: cout << "Inexistente, coloca el mes con un número del 1 al 12, por favor.";
    }

    cout << "Mañana será: " << day << " / " << month << " / " << year;

    return 0;
}