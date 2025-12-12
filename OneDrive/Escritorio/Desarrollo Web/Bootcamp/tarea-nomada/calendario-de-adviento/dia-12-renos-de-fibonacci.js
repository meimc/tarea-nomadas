/*
Descripción
Los renos de Santa se multiplican siguiendo la secuencia de Fibonacci. 
Devuelve el número de renos en la generación n. (0, 1, 1, 2, 3, 5...)

Ejemplos:
Input: [0]
Output: "0"
Input: [6]
Output: "8"
*/

const prompt = require("prompt-sync")();

function fibonacci(generacion) {
    let serie = [0, 1]

    for (let i = 2; i <= generacion ; i++) {
        let next = serie[i - 1] + serie[i - 2];
        serie.push(next);
    }

    return serie[generacion];
}

let generacion = Number(prompt('Ingresa la generación de renos: '));

console.log('El número de renos en la generación '+generacion+' es '+ fibonacci(generacion));

