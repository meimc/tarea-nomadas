#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char genero = 'F';
    cout << "El género es " << genero << endl;

    int edad = 32;
    cout << "Tengo " << edad << " años" << endl;

    float precio = 17.99f;
    cout << "El precio es " << precio << endl;

    double distancia = 12345.6789;
    cout << "La distancia es " << distancia << endl;

    bool esGraduado = false;
    cout << "Es graduado: " << esGraduado << endl;

    string nombre;
    cout << "Ingresa tu nombre:" << endl;
    cin >> nombre;
    cout << "Hola, " << nombre << "!" << endl;

    return 0;
}