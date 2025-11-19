// Dadas 3 longitudess, comprueba si pueden formar un triángulo. Luego, clasifica el tipo de triángulo que es según sus lados.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double lado1, lado2, lado3;

    cout << "Ingresa la medida en centímetros del primer lado: ";
    cin >> lado1;
    cout << "Ingresa la medida en centímetros del segundo lado: ";
    cin >> lado2;
    cout << "Ingresa la medida en centímetros del tercer lado: ";
    cin >> lado3;

    if (lado1<0 || lado2<0 || lado3<0){
        cout << "Ingresa valores positivos." << endl;
        return 0;
    }

    if (lado1+lado2<lado3 || lado2+lado3<lado1 || lado3+lado1<lado2){
        cout << "No es posible hacer un triángulo con esas medidas." << endl;
        return 0;
    }

    if (lado1==lado2 && lado2==lado3) cout << "Es un triángulo equilátero." << endl;
    if ((lado1==lado2 && lado3!=lado1)||(lado1==lado3 && lado2!=lado1)||(lado3==lado2 && lado1!=lado2)) cout << "Es un triángulo isósceles." << endl;
    if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3) cout << "Es un triángulo escaleno." << endl;

    return 0;
}