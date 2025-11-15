//6. Lee tres números que representen el día, el mes y el año, y di si forman una fecha correcta. Considera años bisiestos.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int day=0, month=0, year=0, prueba1=0, prueba2=0, prueba3=0;

    cout << "Ingresa una fecha con números en el orden día mes año" << endl;
    cin >> day >> month >> year;

    prueba1 = year%4;
    prueba2 = year%100;
    prueba3 = year%400;

    switch (month){
        case (1): 
            if (day > 31){
               cout << "Inexistente, Enero sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (2): 
            if (day == 29 && (prueba1 == 0 || (prueba2 == 0 && prueba3 == 0))){
                cout << "Fecha correcta!";
            } else if (day == 29){
                cout << "Inexistente, no es año bisiesto.";
            } else if (day > 29){
                cout << "Inexistente, Febrero sólo tiene 28 días o 29 si es bisiesto.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (3): 
            if (day > 31){
                cout << "Inexistente, Marzo sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (4): 
            if (day > 30){
                cout << "Inexistente, Abril sólo tiene 30 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (5):
            if (day > 31){
                cout << "Inexistente, Mayo sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";;
            }
        break;
        case (6): 
            if (day > 30){
                cout << "Inexistente, Junio sólo tiene 30 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (7): 
            if (day > 31){
                cout << "Inexistente, Julio sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (8): 
            if (day > 31){
                cout << "Inexistente, Agosto sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (9): 
            if (day > 30){
                cout << "Inexistente, Septiembre sólo tiene 30 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (10): 
            if (day > 31){
                cout << "Inexistente, Octubre sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (11): 
            if (day > 30){
                cout << "Inexistente, Noviembre sólo tiene 30 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        case (12): 
            if (day > 31){
                cout << "Inexistente, Diciembre sólo tiene 31 días.";
            } else {
                cout << "Fecha correcta!";
            }
        break;
        default: cout << "Inexistente, coloca el mes con un número del 1 al 12, por favor.";
    }


    return 0;
}