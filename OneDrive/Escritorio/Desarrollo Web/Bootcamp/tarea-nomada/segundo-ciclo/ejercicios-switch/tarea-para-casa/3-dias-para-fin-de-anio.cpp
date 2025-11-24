// Dada una fecha, ¿cuántos días faltan para que termine el año?

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

    if ( day < 1 || day > 31){

        cout << "Inexistente, coloque un día del 1 al 31";
        return 0;
    }

    bool bisiesto = year%400 == 0 || (year%4 == 0 && year%100 != 0);

    switch (month)
    {
    case 2: 
        if (day>29){
            if (bisiesto){
            cout << "Este mes sólo tiene 29 en bisiesto" << endl; 
            } else cout << "Este mes sólo tiene 28 días" << endl; 
            return 0;
        }
    case 4: 
    case 5: 
    case 9: 
    case 11: 
        if (day>30){
            cout << "Error: Este mes sólo tiene 30 días" << endl; 
            return 0;
        }
    }

    int diasPasados=0, diasDelAnio = bisiesto ? 366 : 365;

    switch (month)
    {
    case 12: diasPasados += 30; // Nov
    case 11: diasPasados += 31; // Oct
    case 10: diasPasados += 30; // Sep
    case 9: diasPasados += 31; // Ago
    case 8: diasPasados += 31; // Jul
    case 7: diasPasados += 30; // Jun
    case 6: diasPasados += 31; // Mayo
    case 5: diasPasados += 30; // Abril
    case 4: diasPasados += 31; // Marzo
    case 3: diasPasados += (bisiesto ? 29 : 28);// Feb
    case 2: diasPasados += 31;// Enero
    case 1: break;
    }

    diasPasados += day;

    int diasQueFaltan = diasDelAnio - diasPasados;
    cout << diasDelAnio << " " << diasPasados;
    cout << "Los días que faltan para terminar son: " << diasQueFaltan << endl;


    return 0;
}