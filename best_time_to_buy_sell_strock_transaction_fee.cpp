class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int profit = 0;
        int buyPrice = prices[0];

        for(int i=1; i< prices.size(); i++){
            profit = max(profit, prices[i]-buyPrice-fee);
            buyPrice = min(buyPrice, prices[i] - profit);

        }

        return profit;
    }
};