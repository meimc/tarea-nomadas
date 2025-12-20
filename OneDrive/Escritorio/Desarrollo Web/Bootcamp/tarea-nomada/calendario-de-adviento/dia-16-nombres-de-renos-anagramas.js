/*
Descripción
Dos renos tienen nombres que son anagramas si tienen las mismas letras en diferente orden. 
Verifica si dos nombres son anagramas.

Ejemplos:
Input: ["Rodolfo","Forodol"]
Output: "true"
Input: ["Cometa","Trueno"]
Output: "false"
*/

const prompt = require("prompt-sync")();

function areAnagrams(s1, s2) {
    s1 = s1.toLowerCase();
    s2 = s2.toLowerCase();

    if(s1.length != s2.length){
        return false;
    }

    let name = [];
    for(let i=0; i<s2.length; i++){
        name[i]=false;
    }

    for (let i=0; i<s1.length; i++){
        let found = false;

        for (let j=0; j<s2.length; j++){
            if(s1[i]==s2[j] && name[j]==false){
                name[j]=true;
                found=true;
                break;
            }
        }
        if (found==false){
            return false;
        }
    }
    return true;
}

let nombreUno = prompt("Ingresa el nombre del primer reno: ");
let nombreDos = prompt("Ingresa el nombre del segundo reno: ");

console.log(areAnagrams(nombreUno, nombreDos));