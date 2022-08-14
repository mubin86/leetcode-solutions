class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int sum = 1;
        
        sort(coins.begin(),coins.end());
        
        for(int i=0; i<coins.size(); i++) {
            
               if(sum < coins[i]) {
                    break; 
               }else {
                   sum += coins[i]; 
               }
         }
        
        return sum;  
        
    }
};