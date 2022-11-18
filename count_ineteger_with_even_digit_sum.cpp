class Solution {
public:
    int countEven(int num) {
        int count = 0;
        int temp;
        int sum;
        int remainder;
        
        for(int i=2; i<=num; i++){
             temp = i;
             sum = 0;
            while(temp > 0){
                remainder = temp % 10;
                temp = temp / 10;
                sum += remainder;
            }
            
            if(sum % 2 == 0){
                count++;
            }
          
        }
        
        return count;
    }
};