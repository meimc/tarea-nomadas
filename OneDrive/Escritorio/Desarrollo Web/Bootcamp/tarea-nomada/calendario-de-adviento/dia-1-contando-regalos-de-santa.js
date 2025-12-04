/*
Descripción
Santa Claus necesita saber cuántos regalos tiene que envolver. 
Escribe una función que reciba un array de regalos y devuelva el número total de regalos.
*/
const prompt = require("prompt-sync")();
function countGifts(gifts) {
    return gifts.length;
}

const list = prompt("Ingresa la lista de regalos separados por comas:");

let text = list;
let giftList = [];
let current = "";

for (let i = 0; i < text.length; i++) {
  if (text[i] == ",") {
    giftList.push(current);
    current = "";
  } else {
    current += text[i];
  }
}
giftList.push(current);

let finalList = [];

for (let i = 0; i < giftList.length; i++) {
  let gift = giftList[i].trim();
  if (gift != "") {
    finalList.push(gift);
  }
}

let total = countGifts(finalList);

console.log("Total de regalos: " + total);