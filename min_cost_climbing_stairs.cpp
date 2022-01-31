class Solution {
public:
    
    
    int cos(int i, vector<int>v, int n, vector<int>&dp ){
        if(i>=n) return 0;
        
        if(dp[i]!=-1){
              return dp[i];
        }
          
        int one = cos(i+1, v, n, dp) ;
        int two = cos(i+2, v, n, dp) ;
        
        return dp[i] = v[i] + min(one,two);
    }
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {  
        if(cost.size()==2) {
            return min(cost[0], cost[1]);
        }

        vector<int>dp(cost.size()+1, -1);
        
        return min(cos(0, cost, cost.size(), dp), cos(1, cost, cost.size(), dp));
    }
    

};