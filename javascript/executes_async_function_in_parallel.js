/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */

/**
  Key Points: 
  1. Order of output must match that of input
  2. Reject immediately if any promise rejects
 */

  var promiseAll = async function(functions) {
    return new Promise((resolve, reject) => {
      let resultArray = new Array(functions.length);
      let unresolved = functions.length;
  
      if (functions.length === 0) {
        resolve(resultArray);
      }
      
      functions.forEach(async (promise, index) => {
        try {
          const result = await promise();
          resultArray[index] = result;
          unresolved -= 1;
  
          if (unresolved === 0) {
            resolve(resultArray);
          }
        } catch (err) {
          reject(err);
        }
      })
    })
  };
  
  
  
  /**
   * const promise = promiseAll([() => new Promise(res => res(42))])
   * promise.then(console.log); // [42]
   */