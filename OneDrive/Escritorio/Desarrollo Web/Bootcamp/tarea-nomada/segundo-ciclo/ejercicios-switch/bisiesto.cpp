//5. Lee un mes y año y determina cuántos días tiene ese mes.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int month=0, year=0, prueba1=0, prueba2=0, prueba3=0, days=0;
    string nameMonth;

    cout << "Ingresa un mes del 1 al 12 y el año, en ese orden: " << endl;
    cin >> month >> year;

    prueba1 = year%4;
    prueba2 = year%100;
    prueba3 = year%400;

    if (prueba1 == 0 || (prueba2 == 0 && prueba3 == 0)){
        days = 29;
    } else {
        days = 28;
    }

    switch (month){
        case (1): 
            nameMonth = "Enero";
            days = 31;
        break;
        case (2): 
            nameMonth = "Febrero";
        break;
        case (3): 
            nameMonth = "Marzo";
            days = 31;
        break;
        case (4): 
            nameMonth = "Abril";
            days = 30;
        break;
        case (5):
            nameMonth = "Mayo";
            days = 31;
        break;
        case (6): 
            nameMonth = "Junio";
            days = 30;
        break;
        case (7): 
            nameMonth = "Julio";
            days = 31;
        break;
        case (8): 
            nameMonth = "Agosto";
            days = 31;
        break;
        case (9): 
            nameMonth = "Septiembre";
            days = 30;
        break;
        case (10): 
            nameMonth = "Octubre";
            days = 31;
        break;
        case (11): 
            nameMonth = "Noviembre";
            days = 30;
        break;
        case (12): 
            nameMonth = "Diciembre";
            days = 31;
        break;
        default: nameMonth = "no existe, coloca el mes con un número del 1 al 12, por favor.";
    }

    cout << "El mes " << nameMonth << " del año " << year << " tiene " << days << " días." ;

    return 0;
}