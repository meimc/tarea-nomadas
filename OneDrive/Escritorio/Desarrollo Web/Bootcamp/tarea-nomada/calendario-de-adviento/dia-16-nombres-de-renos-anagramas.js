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

function areAnagrams(s1, s2) {
    let name = "";

    if (s1.lenght!==s2.lenght) return "false";  

    let checked = [];
    for (let i=0; i<s2.lenght; i++){
        checked[i] = false; 
    }

    for (let i=0; i<s1.lenght; i++){
            name.push(s1(i));
            for (let j=0; j<s2.lenght; j++){

            }
        }
}