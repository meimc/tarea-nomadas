/*
Los elfos necesitan filtrar los juguetes rotos antes de empacarlos. 
Recibes un array de juguetes (objetos con propiedad "isBroken"). 
Devuelve solo los que NO están rotos.
*/

const prompt = require("prompt-sync")();

function filterToys(toys) {
  let goodToys = [];

  for (let i = 0; i < toys.length; i++) {
    if (toys[i].isBroken == false) {
      goodToys.push(toys[i].name);
    }
  }
  return goodToys;
}

let amount = prompt ('¿Cuántos juguetes son? ');

let toys = [];

for (let i = 1; i <= amount; i++){
    let name = prompt('¿Qué juguete es el no.'+ i +'? ');
    let broken = prompt ('¿Está roto? (Si/No) ');

    let isBroken;
    if(broken.toLowerCase()=='si'){
        isBroken = true;
    }else isBroken = false;

    let toy = {
        name: name,
        isBroken: isBroken
    };

    toys.push(toy);
}

let result = filterToys(toys);

console.log('Juguetes buenos: ', result);