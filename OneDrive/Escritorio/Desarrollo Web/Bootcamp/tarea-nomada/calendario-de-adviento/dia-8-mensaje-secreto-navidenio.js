/* 
Descripción
Los elfos usan palíndromos como códigos secretos. 
Verifica si un mensaje es un palíndromo (se lee igual al revés). 
Ignora mayúsculas.
*/

const prompt = require("prompt-sync")();

function isPalindrome(text) {
    let message = text.toLowerCase();

    let noSpaces = '';
    for (let i=0; i<message.length; i++){
        if (message[i] != " "){
            noSpaces += message[i];
        }
    }

    let reverse ="";
    for (let i=noSpaces.length-1; i>=0; i--){
        reverse += noSpaces[i];
    }
    return noSpaces == reverse;
}

let text = prompt ('Ingrese el código secreto que dejó el elfo: ');

console.log(isPalindrome(text));