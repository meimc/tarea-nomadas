//3. Ingresa el día y mes de nacimiento de una persona y di cuál es su signo del zodiaco.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int dia=0, mes=0;
    string signo = " ";

    cout << "¿En qué día naciste? ";
    cin >> dia;
    cout << "¿En qué número de mes es tu cumpleaños?";
    cin >> mes;

    switch (mes){
        case (1): 
            if (dia > 31){
                signo = "Inexistente, Enero sólo tiene 31 días.";
            } else if (dia > 19){
                signo = "Acuario";
            } else {
                signo = "Capricornio";
            }
        break;
        case (2): 
            if (dia > 29){
                signo = "Inexistente, Febrero sólo tiene 28 días o 29, si naciste en bisiesto ✨";
            } else if (dia > 18){
                signo = "Piscis";
            } else {
                signo = "Acuario";
            }
        break;
        case (3): 
            if (dia > 31){
                signo = "Inexistente, Marzo sólo tiene 31 días.";
            } else if (dia > 20){
                signo = "Aries";
            } else {
                signo = "Piscis";
            }
        break;
        case (4): 
            if (dia > 30){
                signo = "Inexistente, Abril sólo tiene 30 días.";
            } else if (dia > 19){
                signo = "Tauro";
            } else {
                signo = "Aries";
            }
        break;
        case (5):
            if (dia > 31){
                signo = "Inexistente, Mayo sólo tiene 31 días.";
            } else if (dia > 20){
                signo = "Géminis";
            } else {
                signo = "Tauro";
            }
        break;
        case (6): 
            if (dia > 30){
                signo = "Inexistente, Junio sólo tiene 30 días.";
            } else if (dia > 20){
                signo = "Cáncer";
            } else {
                signo = "Géminis";
            }
        break;
        case (7): 
            if (dia > 31){
                signo = "Inexistente, Julio sólo tiene 31 días.";
            } else if (dia > 22){
                signo = "Leo";
            } else {
                signo = "Cáncer";
            }
        break;
        case (8): 
            if (dia > 31){
                signo = "Inexistente, Agosto sólo tiene 31 días.";
            } else if (dia > 22){
                signo = "Virgo";
            } else {
                signo = "Leo";
            }
        break;
        case (9): 
            if (dia > 30){
                signo = "Inexistente, Septiembre sólo tiene 30 días.";
            } else if (dia > 22){
                signo = "Libra";
            } else {
                signo = "Virgo";
            }
        break;
        case (10): 
            if (dia > 31){
                signo = "Inexistente, Octubre sólo tiene 31 días.";
            } else if (dia > 22){
                signo = "Escorpio";
            } else {
                signo = "Libra";
            }
        break;
        case (11): 
            if (dia > 30){
                signo = "Inexistente, Noviembre sólo tiene 30 días.";
            } else if (dia > 21){
                signo = "Sagitario";
            } else {
                signo = "Escorpio";
            }
        break;
        case (12): 
            if (dia > 31){
                signo = "Inexistente, Diciembre sólo tiene 31 días.";
            } else if (dia > 21){
                signo = "Capricornio";
            } else {
                signo = "Sagitario";
            }
        break;
        default: signo = "Inexistente, coloca el mes con un número del 1 al 12, por favor.";
    }

    cout << "Tu signo del zodiaco es: " << signo << endl;;

    return 0;
}