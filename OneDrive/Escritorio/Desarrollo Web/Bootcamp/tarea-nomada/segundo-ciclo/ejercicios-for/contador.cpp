// Pide al usuario un numero N e imprime un contador desde N hasta 0 usando for

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int start;
    cout << "Ingresa un numero entero para iniciar el contador: ";
    cin >> start;

    if(cin.fail()){
        cout << "Error. Ingrese un numero entero.";
        return 0;
    }else if (start <=0){
        cout << "Error. Ingrese un numero entero positivo.";
    }

    for (int i=start; i>=0; i--){
        cout << "Cuenta regresiva en : " << i << endl;
    }

    return 0;
}