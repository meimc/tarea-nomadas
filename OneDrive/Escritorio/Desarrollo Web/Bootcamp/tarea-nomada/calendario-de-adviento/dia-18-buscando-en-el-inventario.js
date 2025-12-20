/*
Descripción
El inventario de juguetes está ordenado. Implementa búsqueda binaria para encontrar un juguete. Devuelve su índice o -1 si no existe.

Ejemplos:
Input: [[-1,0,3,5,9,12],9]
Output: "4"
Input: [[-1,0,3,5,9,12],2]
Output: "-1"
*/

const prompt = require("prompt-sync")();

function binarySearch(arr, target) {
    let notFound = true;
    for (let i=0; i<arr.length; i++){
        if (target == arr[i]){
            return i
            notFound = false;
            break;
        }
    }
    if (notFound){
        return -1;
    }
}

let quantity = Number(prompt("Cantidad de juguetes: "));

let stock = [];

for (let i=0; i<quantity; i++){
    let tag = Number(prompt("Número del juguete "+ (i+1) + " : "));
    stock.push(tag);
}

let search = Number(prompt("Código del juguete: "));

console.log(binarySearch(stock, search));