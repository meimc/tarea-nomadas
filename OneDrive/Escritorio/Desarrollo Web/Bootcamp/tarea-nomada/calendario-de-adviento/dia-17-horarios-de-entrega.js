/*
Descripción
Santa tiene intervalos de tiempo para entregar regalos [inicio, fin]. Fusiona los intervalos que se superponen para optimizar su ruta.

Ejemplos:
Input: [[[1,3],[2,6],[8,10],[15,18]]]
Output: "[[1,6],[8,10],[15,18]]"
Input: [[[1,4],[4,5]]]
Output: "[[1,5]]"
*/

const prompt = require("prompt-sync")();

function mergeIntervals(intervals) {
    let result = [];

    for (let i=0; i<intervals.length; i++){
        let start = intervals[i][0];
        let finish = intervals [i][1];
        let fusion = false;

        for (let j=0; j<result.length; j++){
            let newStart = result [j][0];
            let newFinish = result [j][1];

            if (start<=newFinish && finish >=newStart){
                result [j][0] = start < newStart ? start : newStart;
                result [j][1] = finish > newFinish ? finish : newFinish;
                fusion = true;
                break;
            }
        }

        if (!fusion){
            result.push([start, finish]);
        }
    }

    return result;

}

let quantity = Number(prompt("Cantidad de intervalos: "));

let intervals = [];

for (let i=0; i<quantity; i++){
    let start = Number(prompt("Inicio "+ (i+1) + " : "));
    let finish = Number(prompt("Fin "+ (i+1) + " : "));
    intervals.push([start,finish]);
}

console.log(mergeIntervals(intervals));