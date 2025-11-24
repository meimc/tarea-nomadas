// Todo el mundo sabe cuántos años tiene, pero ¿podría contestar a la pregunta cuántos días tiene?

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int day, month, year;

    cout << "Ingresa la fecha de tu cumpleaños en el orden día (1 - 31), mes (1 - 12) y año" << endl;
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
        if (bisiesto){
            cout << "Este mes sólo tiene 29 en bisiesto" << endl; 
        } else cout << "Este mes sólo tiene 28 días" << endl; 
        return 0;
    case 4: 
    case 5: 
    case 9: 
    case 11: 
        cout << "Error: Este mes sólo tiene 30 días" << endl; 
        return 0;
    }




    return 0;
}