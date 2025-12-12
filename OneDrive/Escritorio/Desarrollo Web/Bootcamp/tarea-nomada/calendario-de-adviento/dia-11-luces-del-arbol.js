/*
Descripción
Las luces del árbol están conectadas con paréntesis. 
Verifica si la cadena de conexiones está equilibrada: "()" es válido, "(()" no lo es.

Ejemplos:
Input: ["()()"]
Output: "true"
Input: ["(())"]
Output: "true"
*/

const prompt = require("prompt-sync")();

function isValid(luces) {

    let abierto = "(";
    let cerrado = ")";
    let conexionesAbiertas = 0;
    let conexionesCerradas = 0;

    for (let i = 0; i < luces.length; i++) {
        if (luces[i] === abierto) {
        conexionesAbiertas++;
        }
        if (luces[i] === cerrado) {
        conexionesCerradas++;
        }
    }

    if(conexionesAbiertas-conexionesCerradas!=0){
        return false;
    }

    return true;
}

    let luces = prompt('Ingresa la cadena de conexiones con "()": ');

    isValid(luces);

    console.log(isValid(luces));