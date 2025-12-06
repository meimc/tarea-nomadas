/*
Descripción
Santa quiere saber cuál es el regalo más caro que tiene. 
Encuentra el valor máximo en un array de precios.
*/

const prompt = require("prompt-sync")();

function maxGiftValue(prices) {
    let max=prices[0];

    for (let i=1; i<prices.length; i++) {
        if (prices[i] > max) {
            max = prices[i];
        }
    }

    return max;
}

let quantity = Number(prompt('¿Cuántos regalos tiene Santa? '));
let prices = [];

for (let i=1; i<=quantity; i++){
    let price = Number(prompt('¿Cuánto cuesta el regalo no. '+i+' '));
    prices.push(price);
}

let result = maxGiftValue(prices);

console.log('El juguete más caro es: ', result);