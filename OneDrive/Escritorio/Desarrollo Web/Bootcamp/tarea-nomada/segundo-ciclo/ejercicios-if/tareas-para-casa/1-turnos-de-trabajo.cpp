/*
Los trabajadores de una fábrica tienen tres turnos: mañana, tarde y noche.

La tarifa de los turnos de la mañana y tarde son iguales, mientras que de noche son 30% mayores.

Construye un programa que lea el número de horas laboradas por un trabajador y su tarifa. Calcula el salario semanal.

Considera que durante la semana el trabajador se encuentra siempre en el mismo turno.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int horasLaboradas, turno;
    double tarifa;

    cout << "Ingresa las horas trabajadas esta semana:" << endl;
    cin >> horasLaboradas;
    cout << "Ingresa tu tarifa por hora en soles:" << endl;
    cin >> tarifa;
    cout << "Selecciona el turno que ha trabajado:\n 1. mañana\n 2. tarde\n 3. noche" << endl;
    cin >> turno;

    if(cin.fail()){
        cout << "Error: Ingresa datos válidos";
        return 0;
    }

    if(horasLaboradas > 48){
        cout << "Error: El máximo de horas son 48 horas";
        return 0;
    } else if (turno == 3 && horasLaboradas > 30){
        cout << "Error: Las horas máximas del turno nocturno por semana son 30 horas.";
        return 0;
    }

    double salario;

    switch (turno)
    {
    case 1:
    case 2:
        salario = tarifa * horasLaboradas;
        break;
    case 3:
        salario = tarifa * 1.30 * horasLaboradas;
        break;
    default: cout << "Error: Sólo hay 3 turnos disponibles, elije entre el 1 y el 3";
        break;
    }

    cout << "Tu salario esta semana es de S/ " << salario << endl;

    return 0;
}