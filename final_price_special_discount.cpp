class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        
        for(int i=0; i<prices.size(); i++){
            
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j] <= prices[i]){
                    int temp = prices[i] - prices[j];
                    prices[i] = temp;
                    break;
                    
                }
            }
        }
        
        return prices;
    }
};