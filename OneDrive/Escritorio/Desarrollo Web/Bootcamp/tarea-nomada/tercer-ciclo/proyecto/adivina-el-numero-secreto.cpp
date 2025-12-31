/*
Objetivo: 
Crear un juego donde el usuario tiene intentos limitados para adivinar un número generado aleatoriamente.

Temas clave:
const, for (para los intentos), if-else, generación de números aleatorios (rand).

Enunciado del Proyecto: 
"Crea un juego donde la computadora 'piensa' un número entre 1 y 100. 
El jugador tiene un número máximo de vidas (intentos) para adivinarlo. 
En cada intento fallido, el programa debe dar una pista indicando si el número secreto es mayor o menor al ingresado."

Requerimientos Técnicos:

Constantes:
 Define una constante MAX_INTENTOS = 5 y NUMERO_SECRETO (puedes usar rand() % 100 + 1 o fijarlo manualmente para probar).

Ciclo For:
 Usa un bucle for que itere desde 1 hasta MAX_INTENTOS.

Condicionales: 
Dentro del ciclo:
Si el usuario adivina, usa break para salir del ciclo y felicitarlo.
Si el número ingresado es menor al secreto, imprime "El número es mayor".
Si el número ingresado es mayor al secreto, imprime "El número es menor".

Fin del juego: 
Si el ciclo termina y no adivinó, muestra un mensaje de "Game Over" revelando el número.
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_INTENTOS = 5;

void juego (int NUMERO_SECRETO);

bool volverAJugar ();

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    srand(time(0));

    do{
        const int NUMERO_SECRETO = rand() % 100 + 1;
        juego (NUMERO_SECRETO);
    }while(volverAJugar());

    return 0;
}

void juego (int NUMERO_SECRETO){
    cout << "-------------------------------------------\nAdivina el número del 1 al 100\n-------------------------------------------" << endl;
    int intento;
    
    for(int i=1; i<=MAX_INTENTOS; i++){
            
        cout << "Tienes "<< MAX_INTENTOS - i + 1 <<" oportunidades : ";
        cin >> intento;

        if(i==MAX_INTENTOS){
            cout << "-------------------------------------------\nGAME OVER 💀\nEl número secreto era: " << NUMERO_SECRETO << "\n-------------------------------------------" << endl;
            break;
        }

        if (NUMERO_SECRETO==intento){
            cout << "-------------------------------------------\nFELICIDADES! GANASTE EL JUEGO. El número secreto era: " << NUMERO_SECRETO << "\n-------------------------------------------" << endl;
            break;
        }

        if (NUMERO_SECRETO<intento){
            cout << "El número secreto es menor." << endl;
        }

        if (NUMERO_SECRETO>intento){
            cout << "El número secreto es mayor." << endl;
        }           
    }
    
}

bool volverAJugar (){
    int opcion;
    cout << "¿Quieres volver a jugar?\n1.- Sí\n2.- No" << endl;
    cin >> opcion;
    return opcion==1;
}