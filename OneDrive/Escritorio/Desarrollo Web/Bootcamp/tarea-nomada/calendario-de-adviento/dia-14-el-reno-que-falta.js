/*
Descripción
Santa tiene renos numerados del 0 al n, pero uno falta en la lista. 
Encuentra el número del reno perdido.

Ejemplos:
Input: [[3,0,1]]
Output: "2"
Input: [[0,1,2,4,5]]
Output: "3"
*/

const prompt = require("prompt-sync")();

function missingReindeer(ids) {
    let quantity = ids.length;
    let missing = [];

    for(let i=0; i<=quantity; i++){
        if (!ids.includes(i)){
            missing.push(i);
        }
    }
    return missing;
}
let ids = []
let list = Number(prompt('Renos en la lista: '));


for (let i=0; i<list; i++){
    let id = Number(prompt ('id del reno no. '+(i+1)+': '));
    ids.push(id);
}

console.log("id's de los renos faltantes: " + missingReindeer(ids));
