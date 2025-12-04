/*
Descripción
Crea una función que dibuje un árbol de Navidad de altura n usando asteriscos. 
Cada nivel tiene más asteriscos que el anterior. Devuelve un array de strings.
*/

const prompt = require("prompt-sync")();

function drawTree(height) {
    let result = [];

    for(let i=0; i<height; i++){
        let spaces = ' '.repeat(height-i-1);
        let stars = '*'.repeat(2*i+1);
        result.push(spaces + stars);
    }
    return result;
}

let height = Number(prompt ('¿Qué altura tendrá el árbol de navidad?: '));

let tree = drawTree(height);

console.log(tree.join('\n'));