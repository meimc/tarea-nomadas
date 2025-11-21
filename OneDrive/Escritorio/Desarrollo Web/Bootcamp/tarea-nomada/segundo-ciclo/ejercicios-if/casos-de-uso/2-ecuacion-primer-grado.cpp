#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b;

    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;

    if (a == 0){
        if (b == 0) cout << "Existen infinitas soluciones" << endl;
        else cout << "No tiene solución" << endl;
    } else {
        double x = -b/a;
        cout<< "El valor de X es : "<< x;
    }


    return 0;
}