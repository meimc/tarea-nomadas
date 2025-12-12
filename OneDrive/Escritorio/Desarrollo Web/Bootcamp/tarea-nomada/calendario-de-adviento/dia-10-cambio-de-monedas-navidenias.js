/*
Descripción
En la tienda de regalos necesitas dar cambio con el menor número de monedas. 
Dado un monto y monedas disponibles, devuelve el número mínimo de monedas. 
Si no es posible, devuelve -1.

Input: [[1,5,10,25],30]
Output: "2"
Input: [[2],3]
Output: "-1"

*/

const prompt = require("prompt-sync")();

function minCoins(coins, amount) {

    for (let i = 1; i < coins.length; i++) {
        for (let j = 0; j < coins.length - 1; j++) {
            if (coins[j] < coins[j + 1]) {
            let temp = coins[j];
            coins[j] = coins[j + 1];
            coins[j + 1] = temp;
            }
        }
    }

    let sum = 0;

    for (let i = 0; i < coins.length; i++) {
    sum += coins[i];
    }
    
    if (sum < amount){
        return -1;
    }

    let count = 0;

    for (let i = 0; i < coins.length; i++) {
        let coin = coins[i];

        while (amount >= coin) {
            amount -= coin;
            count++;
        }
    }

    return count;

}

let monedas = Number(prompt('¿Cuántas monedas tienes para el cambio? '));
let coins = [];

for (let i=1; i<=monedas; i++){
    let coin = Number(prompt('Valor de la moneda no. '+i+': '));
    coins.push(coin);
}

let amount = Number(prompt('Monto a devolver: '));

console.log('Monedas usadas: ' + minCoins(coins, amount));
