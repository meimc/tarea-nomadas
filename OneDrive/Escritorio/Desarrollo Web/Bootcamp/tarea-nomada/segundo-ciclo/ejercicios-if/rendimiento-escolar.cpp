/*
Escribe un algoritmo que lea el promedio de un alumno y diga cuál es su rendimiento, considera: datos erroneos, rendimiento pésimo, rendimiento deficiente, rendimiento regular, rendimiento bueno.
Pésimo: 0 – 10
Deficiente: 11 – 13
Regular: 14 – 16
Bueno: 17 – 20
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float promedio;

    cout << "Ingresa tu promedio actual: ";
    cin >> promedio;

    if (0>promedio>20) {
        cout << "Información no válida, tu promedio debe estar entre el 0 y el 20." << endl;
        return 0;
    }

    if (promedio<=10) cout << "Promedio Pésimo." << endl;
    if (promedio>=11 && promedio<=13) cout << "Promedio Deficiente."<< endl;
    if (promedio>=14 && promedio<=16) cout << "Promedio Regular."<< endl;
    if (promedio>=17 && promedio<=20) cout << "Promedio Bueno."<< endl;

    return 0;
}