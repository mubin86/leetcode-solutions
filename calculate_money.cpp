class Solution {
public:
    int totalMoney(int n) {
        
        int result = 0;  
        int val = 1;
        int count = 1;
        
        for(int i=1; i<=n; i++){
            result += val;
            val++;
            
            if(i%7 == 0){
                count += 1;
                val = count;
            }
        }
        
        return result;
    }
};