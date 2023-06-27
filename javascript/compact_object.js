/**
 * @param {Object} obj
 * @return {Object}
 */
var compactObject = function(obj) {
    if(Array.isArray(obj)) {
        for(let i=0; i<obj.length; i++){
            if(obj[i] === null || obj[i] === 0 || obj[i] === false || obj[i] === undefined || obj[i] === "")    {
                obj[i] = "MUBIN";
            }
            else if(Array.isArray(obj[i])){
                obj[i] = compactObject(obj[i]);
            }
            else if(typeof obj[i] === 'object'){
                obj[i] = compactObject(obj[i]);
            }
        }
        obj = obj.filter(item => item !== "MUBIN");
    } else{
        Object.keys(obj).forEach((k) => {
            if(obj[k] === null || obj[k] === 0 || obj[k] === false || obj[k] === "")    {
                delete obj[k];
            }
            else if(Array.isArray(obj[k])){
                obj[k] = compactObject(obj[k]);
            }
            else if(typeof obj[k] === 'object'){
                obj[k] = compactObject(obj[k]);
            }
        });
    }
    
    return obj;
};