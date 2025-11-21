//Dada la hora del dia en horas, minutos y segundos, encuentre la hora del siguiente segundo.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int hora, minutos, segundos;

    cout << "Ingresa la hora del día 0-23: ";
    cin >> hora;

    cout << "Ingresa los minutos 0-59: ";
    cin >> minutos;

    cout << "Ingresa los segundoss 0-59: ";
    cin >> segundos;

    if (cin.fail() || (hora < 0 || hora > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59)){
        cout<<"Error: Ingresar un número entero, positivo, dentro del rango.";
        return 0;
    }

    segundos++;

    if (segundos==60) {
        segundos = 0;
        minutos++;
    }

    if (minutos==60){
        minutos = 0;
        hora ++;
    }

    if (hora==24) hora = 0;

    cout << "La hora al segundo siguientes es: " << hora << " : " << minutos << " : " << segundos << endl;

    return 0;
}