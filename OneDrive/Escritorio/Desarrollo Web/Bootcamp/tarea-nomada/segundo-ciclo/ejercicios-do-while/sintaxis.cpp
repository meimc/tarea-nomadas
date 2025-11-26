#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int contador = 0;   

    do{
        contador++;
        cout << "contador: " << contador << endl;
    }while ( contador < 6);
    

    return 0;
}