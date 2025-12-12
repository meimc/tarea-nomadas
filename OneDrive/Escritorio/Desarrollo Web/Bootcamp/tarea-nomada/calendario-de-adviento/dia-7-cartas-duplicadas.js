/*
Descripción
Dos niños enviaron sus listas de deseos a Santa. 
Encuentra los regalos que aparecen en ambas listas (sin duplicados).
*/

const prompt = require("prompt-sync")();

function commonGifts(list1, list2) {
    let small = list1.length < list2.length ? list1 : list2;
    let big = list1.length < list2.length ? list2 : list1;

    let finalList = [];

    for (let i = 0; i < small.length; i++) {
        let gift = small[i];

        if (big.includes(gift) && !finalList.includes(gift)){
            finalList.push(gift);
        }
    }

  return finalList;

}

let gifts1 = Number(prompt('¿Cuántos regalos tiene la primera lista? '));
let list1 = [];

for (let i=1; i<=gifts1; i++){
    let gift = prompt('¿Qué es el regalo no. '+i+': ');
    list1.push(gift);
}

let gifts2 = Number(prompt('¿Cuántos regalos tiene la segunda lista? '));
let list2 = [];

for (let i=1; i<=gifts2; i++){
    let gift = prompt('¿Cuánto cuesta el regalo no. '+i+' ');
    list2.push(gift);
}

let result = commonGifts(list1, list2);

console.log('Los juguetes que coinciden son: ' + result);
