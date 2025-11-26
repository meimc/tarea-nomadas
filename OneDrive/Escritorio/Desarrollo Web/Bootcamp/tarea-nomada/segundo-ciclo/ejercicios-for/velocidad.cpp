//Un vehículo recorre N distancias en N tiempos diferentes. Cuál será su velocidad promedio para toda la trayectoria?

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int tramos;

    cout << "Cuantas distancias y tiempos tienes? ";
    cin >> tramos;

    double distanciaTotal = 0.00, tiempoTotal = 0.00;

    for (int i = 1; i <= tramos; i++) {
        double distancia, tiempo;

        cout << "Distancia (km)" << i << ": ";
        cin >> distancia;

        cout << "Tiempo (hr)" << i << ": ";
        cin >> tiempo;

        distanciaTotal += distancia;
        tiempoTotal += tiempo;
    }

    float velocidadProm = distanciaTotal / tiempoTotal;

    cout << "La velocidad promedio es: " << velocidadProm << " km/h"<< endl;

    return 0;
}