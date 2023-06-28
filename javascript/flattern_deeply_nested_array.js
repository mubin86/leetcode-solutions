/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */

var flat = function (arr, n) {
    if(n===0){
        return arr;
    }
    let newArr = [];
    
    for(var i=0; i<arr.length; i++) {
        if(Array.isArray(arr[i])) {
            const result = flat(arr[i], n-1);
            newArr = [...newArr, ...result]; 
        } else {
            newArr.push(arr[i]);
        }
    }

    return newArr;
};