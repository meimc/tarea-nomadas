//4. Lee un día y mes cualquiera y determina la estación a la que pertenece.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int dia=0, mes=0;
    string estacion = " ";

    cout << "Ingresa un día: ";
    cin >> dia;
    cout << "Ingresa un mes del 1 al 12: ";
    cin >> mes;

    switch (mes){
        case (1): 
            if (dia > 31){
                estacion = "Error, Enero sólo tiene 31 días.";
            } else {
                estacion = "Es Verano 🌞";
            }
        break;
        case (2): 
            if (dia > 29){
                estacion = "Error, Febrero sólo tiene 28 días o 29, si es bisiesto";
            } else {
                estacion = "Es Verano 🌞";
            }
        break;
        case (3): 
            if (dia > 31){
                estacion = "Error, Marzo sólo tiene 31 días.";
            } else if (dia > 19){
                estacion = "Es Otoño 🍂";
            }
        break;
        case (4): 
            if (dia > 30){
                estacion = "Error, Abril sólo tiene 30 días.";
            } else {
                estacion = "Es Otoño 🍂";
            }
        break;
        case (5):
            if (dia > 31){
                estacion = "Error, Mayo sólo tiene 31 días.";
            } else {
                estacion = "Es Otoño 🍂";
            }
        break;
        case (6): 
            if (dia > 30){
                estacion = "Error, Junio sólo tiene 30 días.";
            } else if (dia > 19){
                estacion = "Es Invierno ❄️";
            } else {
                estacion = "Es Otoño 🍂";
            }
        break;
        case (7): 
            if (dia > 31){
                estacion = "Error, Julio sólo tiene 31 días.";
            } else {
                estacion = "Es Invierno ❄️";
            }
        break;
        case (8): 
            if (dia > 31){
                estacion = "Error, Agosto sólo tiene 31 días.";
            } else {
                estacion = "Es Invierno ❄️";
            }
        break;
        case (9): 
            if (dia > 30){
                estacion = "Error, Septiembre sólo tiene 30 días.";
            } else if (dia > 21){
                estacion = "Es Primavera 🌷";
            } else {
                estacion = "Es Invierno ❄️";
            }
        break;
        case (10): 
            if (dia > 31){
                estacion = "Error, Octubre sólo tiene 31 días.";
            } else {
                estacion = "Es Primavera 🌷";
            }
        break;
        case (11): 
            if (dia > 30){
                estacion = "Error, Noviembre sólo tiene 30 días.";
            } else {
                estacion = "Es Primavera 🌷";
            }
        break;
        case (12): 
            if (dia > 31){
                estacion = "Error, Diciembre sólo tiene 31 días.";
            } else if (dia > 20){
                estacion = "Es Verano 🌞";
            } else {
                estacion = "Es Primavera 🌷";
            }
        break;
        default: estacion = "Error, coloca el mes con un número del 1 al 12, por favor.";
    }

    cout << "La estación del año en esa fecha es: " << estacion << endl;;

    return 0;
}