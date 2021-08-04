class Solution {
public:
    int reverse(int x) {
        // int result=0;
       
        long long int sum=0; 
        while(x != 0){
            long long int temp = x%10;
            sum = sum*10 + temp;
            x= x/10;       
        }
            if(sum> INT_MAX || sum< INT_MIN){
                return 0;
            }else{
                 return sum; 
            }

    }
};