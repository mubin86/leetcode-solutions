/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    let chunkArray = [];
    let ind = 0;
    
    while(ind <arr.length){
        chunkArray.push(arr.slice(ind, ind + size));
        ind += size;
    }

    return chunkArray; 
};