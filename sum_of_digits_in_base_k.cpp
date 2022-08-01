class Solution {
public:
    int sum = 0;
    
    int sumBase(int n, int k) {

        while(n !=0 ){
            int remainder = n % k;
            n = n / k;
        
            sum += remainder;
        }
        
        return sum;
    }
};