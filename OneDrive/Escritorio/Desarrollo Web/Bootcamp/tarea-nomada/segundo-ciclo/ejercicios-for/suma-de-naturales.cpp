// Escribe un programa que imprima la suma de los primeros 10 números naturales usando for

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int suma = 0;

    for(int i = 1; i <=10; i++){
        suma += i;
        cout << "Suma de naturales : " << suma << endl;
    }

    return 0;
}