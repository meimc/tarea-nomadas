//Muestra las tablas de multiplicar del 1 al 15.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    for (int i=1; i<=15; i++){

        cout << "La tabla del " << i << " es: " << endl;

        for (int j=1; j<=12; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }
    }

    return 0;
}