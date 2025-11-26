// Imprime del 1 al 5.
/*
    for (inicializacion; condicion; incremento o decremento){
    lo que desea ejecutar
    }
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    for(int contador = 1; contador <=5; contador++){
        cout << "Contador : " << contador << endl;
    }

    return 0;
}