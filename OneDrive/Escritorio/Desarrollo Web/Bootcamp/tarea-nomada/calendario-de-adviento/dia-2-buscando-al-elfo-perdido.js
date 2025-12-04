/*
Descripción
Un elfo se ha perdido en el taller. 

Escribe una función que devuelva "Encontrado" si el nombre del elfo está en la lista de elfos presentes, 
o "Perdido" si no está.
*/

const prompt = require("prompt-sync")();

function findElf(elves, name) {
    let found= false; 
    for (let i = 0; i < elves.length; i++){ 
        let elf = elves[i].trim(); 

        if (elf.toLowerCase() == name.trim().toLowerCase()){ 
            found = true;
            return 'Encontrado'; 
            break; 
        } 
    } 
    return 'Perdido'; 
} 

let entry = prompt('Ingresa los elfos presentes separados por una coma '); 
let elvesList = entry.split(','); 

let wantedElf = prompt('¿Qué elfo estás buscando? '); 
let result = findElf(elvesList, wantedElf); 

console.log (result);