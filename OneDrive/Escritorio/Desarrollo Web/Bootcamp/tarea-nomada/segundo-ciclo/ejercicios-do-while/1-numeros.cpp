//Lee una serie de números hasta ingresar el valor de 0. Luego cuántos números positivos, negativos, pares e impares fueron ingresados.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero, par=0, positivo=0, negativo=0, impar=0;

    do{
        cout << "Ingresa un numero entero" << endl;
        cin >> numero;

        if(numero > 0){
            positivo++;
        }else if (numero < 0){
            negativo++;
        }
        if (numero%2 == 0 && numero != 0){
                par++;
        } else if (numero != 0) {
            impar++;
        }
    }while(numero != 0);

    cout << "La cantidad de números positivos son: " << positivo << " de los cuales: " << par << " son par y " << negativo << " son negativos." << endl;

    return 0;
}