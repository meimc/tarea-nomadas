/*
Descripción
Encuentra la longitud de la cinta de regalo más larga sin que se repitan colores (caracteres).

Ejemplos:
Input: ["rojoazulverde"]
Output: "10"
Input: ["aaaaa"]
Output: "1"
*/

const prompt = require("prompt-sync")();

function lengthOfLongestSubstring(s) {
    let contador = 0;
    let max = 0;
    for (let i=0; i<s.length; i++){
        for (let j=contador; j<i; j++){
            if (s[j]==s[i]){
                contador = j + 1;
                break
            }
        }
        
        let longitud = i-contador+1;

        if (longitud>max){
            max = longitud;
        }
    }
    return max;
}
    

let cadena = prompt("Ingresa la cadena de caracteres de la cinta de regalo: ");

console.log(lengthOfLongestSubstring(cadena));