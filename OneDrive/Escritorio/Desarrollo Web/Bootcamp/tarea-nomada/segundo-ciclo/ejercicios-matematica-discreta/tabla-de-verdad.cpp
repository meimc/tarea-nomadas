/*
(p -> q)===(-p V q)
Escribe un programa que genere la tabla de verdad pa p, q y muestre las columnas:
p
q
p -> q
!p || q
*/

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    cout<< setw(3)<<"p"<<setw(4)<<"q"<<setw(8)<<"p -> q"
        <<setw(11)<<"!p || q"<<setw(12)<<"¿Coincide?"<<endl;
    cout << string(38, '-')<<endl;

    bool all_equal = true;

    for

    return 0;
}