// Todo el mundo sabe cuántos años tiene, pero ¿podría contestar a la pregunta cuántos días tiene?

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int day, month, year, diaCumple, mesCumple, anioCumple;

    cout << "Ingresa la fecha de tu cumpleaños en el orden día (1 - 31), mes (1 - 12) y año" << endl;
    cin >> diaCumple >> mesCumple >> anioCumple;

    cout << "Ingresa la fecha de hoy en el orden día (1 - 31), mes (1 - 12) y año" << endl;
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
    
    int diasPasados = 0;

    while ((anioCumple) < (year-1)){
        anioCumple++;
        bool esBisiesto = anioCumple%400 == 0 || (anioCumple%4 == 0 && anioCumple%100 != 0);
        diasPasados += (esBisiesto ? 366 : 365);
        cout << diasPasados << endl;
    }

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
    bool esBisiesto = anioCumple%400 == 0 || (anioCumple%4 == 0 && anioCumple%100 != 0);

    switch (mesCumple)
    {
    case 1: diasPasados += (esBisiesto ? 29 : 28);// Feb
    case 2: diasPasados += 31; // Marzo
    case 3: diasPasados += 30; // Abril
    case 4: diasPasados += 31; // Mayo
    case 5: diasPasados += 30; // Jun
    case 6: diasPasados += 31; // Jul
    case 7: diasPasados += 31; // Ago
    case 8: diasPasados += 30; // Sep
    case 9: diasPasados += 31; // Oct
    case 10: diasPasados += 30; // Nov
    case 11: diasPasados += 31;// Diciembre
    case 12: break;
    }

    int diasParaCompletarElMes=0;

    switch (month){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasParaCompletarElMes = 31 - diaCumple;
        break;
        case 2: 
            diasParaCompletarElMes = esBisiesto ? (29 - diaCumple) : (28 - diaCumple);
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasParaCompletarElMes = 30 - diaCumple;
        break;
        default: cout << "Inexistente, coloca el mes con un número del 1 al 12, por favor.";
    }


    diasPasados += diasParaCompletarElMes;

    cout << diasPasados << endl;

    return 0;
}