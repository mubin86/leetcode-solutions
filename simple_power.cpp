class Solution {
public:
    double myPow(double x, int n) {
        int count=0;
        double result=0;
        result = pow(x, n);
        
        if(result < -10000 || result > 10000){
            return 0;
        }else{
            return result;
        }     
    }
};
