/*
Descripción
Las cajas de regalos están apiladas en varios niveles. 
Aplana todas las cajas en un solo nivel. Devuelve un array simple con todos los elementos.

Input: [[1,[2,3],[4,[5,6]]]]
Output: "[1,2,3,4,5,6]"

*/

const prompt = require("prompt-sync")();

function flattenBoxes(boxes) {

    let result = [];

    for (i=0; i<boxes.length; i++){
        let element = boxes[i];

        if (Array.isArray(element)){
            let flat = flattenBoxes(element);

            for (let j=0; j<flat.length; j++){
                result.push(flat[j]);
            }
        }else {
            result.push(element);
        }
    }
    return result;
}

console.log(flattenBoxes(boxes));