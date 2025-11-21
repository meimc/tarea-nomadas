/*
A un trabajador se le paga una tarifa fija las horas normales de labores. Se consideran horas normales a todas las horas trabajadas hasta un total de 140 al mes.

Las horas adicionales a 140 se consideran extras. Por una hora extra se paga el equivalente a 1,5 horas normales.

Los impuestos varían según el monto obtenido por el trabajador. Si el sueldo es menor o igual a S/. 2000 y no paga impuestos, por los siguientes S/.2000 paga el 10%, mientras que para montos mayores a S/. 4000 paga el 15% sobre el adicional, ¿Cuál es el sueldo neto del trabajador y cuál es el monto de impuestos que debe pagar?
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float horasTrabajadas, tarifa;

    cout << "Ingresa la tarifa por hora del trabajador:" << endl;
    cin >> tarifa;
    cout << "Ingresa las horas laboradas en el mes:" << endl;
    cin >> horasTrabajadas;

    if(cin.fail()){
        cout << "Error: Ingresa datos válidos";
        return 0;
    }

    if(horasTrabajadas < 0 || horasTrabajadas > 372){
        cout << "Error: Ingrese un valor válido";
        return 0;
    }

    float sueldo, horasExtras, impuestos = 1.00f;

    if (horasTrabajadas<=140){
        sueldo = horasTrabajadas * tarifa;
    } else if (horasTrabajadas>140){
        horasExtras = horasTrabajadas - 140;
        sueldo = (140*tarifa)+(horasExtras*tarifa*1.5);
        impuestos = 0.10;
        if (sueldo > 4000){
            impuestos = 0.15;
        }
    }

    float totalImpuestos, totalSueldo;

    totalImpuestos = sueldo * impuestos;
    totalSueldo = sueldo - totalImpuestos;
    
    cout << "Total bruto S/. " << sueldo << endl << "Impuestos  S/. " << totalImpuestos << endl << "------------------" << endl << "Total neto S/. " << totalSueldo << endl;

    return 0;
}