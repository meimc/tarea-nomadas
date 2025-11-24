// Lee un número menor a 4000 y conviértelo a números romanos.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero;

    cout << "Ingrese un número menor a 4000, entero y positivo: " << endl;
    cin >> numero;

    if (cin.fail()){
        cout << "Error: Datos inválidos."; 
        return 0;
    }

    if (numero < 0 || numero > 4000) {
        cout << "Error: Ingrese un número positivo, menor a 4000."; 
        return 0;
    }

    int millares = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int decenas = (numero % 100) / 10;
    int unidades = numero % 10;

    string romano = "";

    switch (millares)
    {
    case 1:
        romano = "M";
        break;
    case 2:
        romano = "MM";
        break;
    case 3:
        romano = "MMM";
        break;
    default:
        break;
    }

    switch (centenas)
    {
    case 1:
        romano += "C";
        break;
    case 2:
        romano += "CC";
        break;
    case 3:
        romano += "CCC";
        break;
    case 4:
        romano += "CD";
        break;
    case 5:
        romano += "D";
        break;
    case 6:
        romano += "DC";
        break;
    case 7:
        romano += "DCC";
        break;
    case 8:
        romano += "DCCC";
        break;
    case 9:
        romano += "CM";
        break;
    
    default:
        break;
    }

    switch (decenas)
    {
    case 1:
        romano += "X";
        break;
    case 2:
        romano += "XX";
        break;
    case 3:
        romano += "XXX";
        break;
    case 4:
        romano += "XL";
        break;
    case 5:
        romano += "L";
        break;
    case 6:
        romano += "LX";
        break;
    case 7:
        romano += "LXX";
        break;
    case 8:
        romano += "LXXX";
        break;
    case 9:
        romano += "XC";
        break;

    }

    switch (unidades)
    {
    case 1:
        romano += "I";
        break;
    case 2:
        romano += "II";
        break;
    case 3:
        romano += "III";
        break;
    case 4:
        romano += "IV";
        break;
    case 5:
        romano += "V";
        break;
    case 6:
        romano += "VI";
        break;
    case 7:
        romano += "VII";
        break;
    case 8:
        romano += "VIII";
        break;
    case 9:
        romano += "IX";
        break;

    default:
        break;
    }

    cout << "En romano, el número " << numero << " es: " << romano;

    return 0;
}