/**
 * @param {Object | Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    
    if(Array.isArray(obj)){
        if(obj.length == 0){
            return true
        }
            return false;
    }else{
        if(Object.keys(obj).length == 0){
            return true;
        }
            return false;
    }
};