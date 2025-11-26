//Simula un reloj rápico que muestre en pantalla las horas, los minutos y los segundos.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    for (int hora=1; hora<=24; hora++){
        for (int min=0; min<=59; min++){
            for (int seg=0; seg<=59; seg++){
                cout << "La hora es: " << hora << " : " << min << " : " << seg << endl;
            }
        }
    }

    return 0;
}