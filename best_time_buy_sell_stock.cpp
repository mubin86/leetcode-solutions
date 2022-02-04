class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int l=0, r=1;
    int maxPro = 0;    
        
        for(int i = 1; i<prices.size(); i++){
            
            if(prices[l] < prices[r]){   
                int profit = prices[r] - prices[l];
                maxPro = max(maxPro, profit);
                
            }else{
                
                l = r;
            }
            
            r += 1;
            
            
        }
          
        return maxPro;
       
    }
};