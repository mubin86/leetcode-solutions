/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    let indexed = {};

    for (let a of arr1) {
        indexed[a.id] = a;
    }
    
    for (let b of arr2) {
        indexed[b.id] = {...indexed[b.id], ...b}
    }

    let merged = Object.values(indexed)
    merged.sort((a, b) => a.id - b.id)
    return merged;
};