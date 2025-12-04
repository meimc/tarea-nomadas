/*
Descripción
Calcula el peso total que llevará el trineo de Santa. 
Cada regalo es un objeto con una propiedad "weight" (peso en kg).
*/

const prompt = require("prompt-sync")();

let totalWeight = 0;
function calculateWeight(gifts) { 
    for (let i=1; i<=gifts; i++){ 
        let weight = Number(prompt('¿Cuánto pesa el regalo No. '+ i + '? ')); 
        totalWeight += weight;
    } 
} 

let gifts = prompt('¿Cuántos regalos lleva Santa? '); 

let result = calculateWeight(gifts); 

console.log('El peso total de los regalos es de: ' + totalWeight);