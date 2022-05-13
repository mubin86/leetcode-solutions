class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        
        while(numBottles >= numExchange){
            int res = numBottles / numExchange;
        
            int rem = numBottles % numExchange;
            
            total += res;
            
            numBottles = res + rem;
        }

        return total;
    }
};