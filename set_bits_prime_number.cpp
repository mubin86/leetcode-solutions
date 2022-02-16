class Solution {
public:
    bool isPrime(int num){
        
        if(num == 1 ){
            return false;
        }
        
        for(int i = 2; i < num; i++ ){
            if(num % i == 0){
                return false;
            }
            
        }
        
        return true;
        
    }
    
    int countPrimeSetBits(int left, int right) {
        int result = 0;
  
        for(int i=left; i <= right; i++){
            
            int temp = i;
            int count = 0;
            
            while(temp != 0){
                
                if(temp & 1 == 1){
                    count++;
                }
                
                temp = temp >> 1;
                
            }
            
            if(isPrime(count)){
                
                result++;
            }
            
        }
        
        return result;
    }
};