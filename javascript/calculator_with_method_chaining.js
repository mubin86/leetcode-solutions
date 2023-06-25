class Calculator {
  
    /** 
     * @param {number} value
     */
    constructor(value) {
        this.result = value;;
    }
  
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    add(value){
        this.result += value;
        return this;
    }
  
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    subtract(value){
        this.result -= value;
        return this;
    }
  
    /** 
     * @param {number} value
     * @return {Calculator}
     */  
    multiply(value) {
        this.result *= value;
        console.log("multiply this.result ", this.result);
        return this;
    }
  
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    divide(value) {
        try{
          if(value === 0){
           throw err;
          }
          this.result /= value;
          return this;
        }catch(err){
            throw new Error("Division by zero is not allowed");
        }
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    power(value) {
        this.result = this.result ** value;
        return this;
    }
      
    /** 
     * @return {number}
     */
    getResult() {
     return this.result;
    }
  }