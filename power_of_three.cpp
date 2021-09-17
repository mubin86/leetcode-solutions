class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        long long int sum =1;
        
        while(sum <=n ){
            sum *= 3;
            
            if(sum == n){
                return true;
            }
        }
        
        return false;
    }
};