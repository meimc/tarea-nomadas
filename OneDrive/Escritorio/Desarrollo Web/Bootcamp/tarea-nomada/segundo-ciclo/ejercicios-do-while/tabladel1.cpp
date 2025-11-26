// Elabora la tabla del 1 usando do while

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int tabla;

    cout << "Ingresa hasta donde quieres la tabla del 1" << endl;
    cin >> tabla;

    int total=0;

    do{
        total*= 1;
        cout << "1 x " << total << " = " << total << endl;
        total++;
    }while(total <= tabla);

    return 0;
}