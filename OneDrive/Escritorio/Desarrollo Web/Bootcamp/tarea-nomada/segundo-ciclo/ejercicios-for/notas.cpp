// Ingreso de notas con validaciones multiples
/*
El usuario debe ingresar la cantidad de N notas
Validar que N sea mayor que 0 usando while
Luego por cada nota:
- Validar que cada nota esté entre 0 y 20 usando do-while
- Azumularlas (usando for). Al final usar if para indicar si el promedio final es aprobado (>= 13) o desaprobado (<13)
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int cantidad;
    double suma = 0.00, nota;

    cout << "Ingresa el número de notas a evaluar: ";
    cin >> cantidad;

    while ( cantidad <=0  ){
        cout << "La cantidad de notas debe ser mayor que cero." << endl;

        cout << "Ingresa el número de notas a evaluar: ";
        cin >> cantidad; 
    }

    for (int i=1; i<= cantidad; i++){
        do{
            cout << "Ingresa la primera nota (1-20): ";
            cin >> nota;

            if(nota < 0 || nota > 20){
                cout << "Nota invalida." << endl;
            }

            suma += nota;

        }while(nota < 0 || nota > 20);
    }

    double promedio = suma / cantidad;

    cout << "El promedio final es: " << promedio << endl;

    if(promedio >= 13){
        cout << "Alumno Aprobado" << endl;
    } else {
        cout << "Alumno Desaprobado" << endl;
    }
    return 0;
}