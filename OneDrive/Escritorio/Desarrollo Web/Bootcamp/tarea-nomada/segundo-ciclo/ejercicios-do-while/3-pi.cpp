/*
Encuentra el valor de π sabiendo que la suma de la serie: 1-1/3+1/5-1/7+1/9-… es igual a π/4. 
Sugerencia: considere los términos cuyo valor absoluto sea mayor que 0,000001.
*/ 

#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double suma = 0.0, termino;
    int i = 0, signo = 1;           

    do {
        termino = signo * (1.0 / (2.0 * i + 1.0));
        suma += termino;

        signo = -signo;
        i++;

    } while (fabs(termino) > 0.000001);

    double pi = suma * 4.0;

    cout << "π = " << pi << endl;
    cout << "Se usaron " << i << " términos para el cálculo." << endl;

    return 0;
}