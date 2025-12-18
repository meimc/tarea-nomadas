/*
Descripción
Agrupa los regalos por categoría. 
Recibe un array de regalos (objetos) y una propiedad. 
Devuelve un objeto donde las claves son los valores de esa propiedad.

Ejemplos:
Input: [[{"type":"juguete","name":"oso"},{"type":"libro","name":"cuento"},{"type":"juguete","name":"tren"}],"type"]
Output: "{\"juguete\":[{\"type\":\"juguete\",\"name\":\"oso\"},{\"type\":\"juguete\",\"name\":\"tren\"}],\"libro\":[{\"type\":\"libro\",\"name\":\"cuento\"}]}"
 */

const prompt = require("prompt-sync")();

function groupBy(collection, property) {
    let result = {};

    for (let i = 0; i < collection.length; i++) {
        let key = collection[i][property];

        if (!result[key]) {
            result[key] = [];
        }

        result[key].push(collection[i]);
    }

    return result;
}

let quantity = Number(prompt('Regalos a registrar: '));
let gifts = [];

for (let i=0; i<quantity; i++){
    let name = prompt('Nombre del regalo: ');
    let type = prompt('Tipo de regalo: ');

    gifts.push({ nombre: name, tipo: type });
}

let property = prompt('Agrupar por nombre o tipo: ');

console.log(groupBy(gifts, property));