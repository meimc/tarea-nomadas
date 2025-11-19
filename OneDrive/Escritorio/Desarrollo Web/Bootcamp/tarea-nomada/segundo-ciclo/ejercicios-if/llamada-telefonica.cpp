#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float minutos;

    cout << "¿Cuántos minutos ha durado tu llamada? ",
    cin >> minutos;

    if (minutos <= 0){
        cout << "Duración de la llamada inválido";
        return 0;
    }

    if (minutos <= 3) {
        cout << "La llamada costará 0.5 soles";
    }
    else {
        float costo = 0.5 + ((minutos-3) * 0.1);
        cout << "La llamada costará " << ceil(costo) << " soles";
    }
    return 0;
}