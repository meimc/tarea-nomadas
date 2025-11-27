// Escribe un programa que pida un número N y muestre todos lo números pares desde 2 hastas N

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero;

    cout << "Ingresa un número entero y mayor a 2: ";
    cin >> numero;

    if (numero < 3){
        cout << "Error. Ingresa un número mayor a 2.";
        return 0;
    }
    if (numero == 3){
        cout << "El único número par del 2 al 3 es 2.";
    }else{
        cout << "Los números pares desde el 2 hasta el " << numero << " son:" << endl;
    }
    

    for (int i = 2; i <= numero; i += 2) {
    
        cout << i << " ";
    }

    cout << endl;

    return 0;
}