// 2. Dada una fecha, di la fecha del día de ayer

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int day, month, year;

    cout << "Ingresa una fecha con números en el orden día (1 - 31), mes (1 - 12) y año" << endl;
    cin >> day >> month >> year;

    if (cin.fail()){
        cout << "Error: Ingrese datos válidos.";
        return 0;
    }

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
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day == 1 && month ==1){
                month = 12;
                year--;
            } else if (day == 1 && month ==8){
                day = 31;
                month--;
            } else if (day == 1){
                day = 30;
                month--;
            } else {
                day--;
            }
        break;
        case 2: 
            if (day == 29 && (year%400 == 0 || (year%4 == 0 && year%100 != 0))){
                day--;
            } else if (day == 29){
                cout << "Inexistente, no es año bisiesto.";
                return 0;
            } else if (day > 29){
                cout << "Inexistente, Febrero sólo tiene 28 días o 29 si es bisiesto.";
                return 0;
            } else if (day == 1) {
                day=1;
                month--;
            }
        break;
        case 3:
            if (day == 1 && (year%400 == 0 || (year%4 == 0 && year%100 != 0))){
                day = 29;
                month--;
            } else if (day == 1){
               day = 28;
                month--;
            } else {
                day--;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(day == 31){
                cout << "Inexistente, este mes solo tiene 30 días.";
                return 0;
            }
            if (day == 1){
                day = 31;
                month --;
            } else {
                day--;
            }
        break;
        default: 
            cout << "Inexistente, coloca el mes con un número del 1 al 12, por favor.";
            return 0;
    }

    cout << "Ayer fue: " << day << " / " << month << " / " << year;

    return 0;
}