int countofSubset(vector<int>& nums, int val, int n){
        
        int dp[n+1][val + 1];
        
        //dp initialization
        for(int j=0; j<=val; j++) {
            dp[0][j] = 0;
        }
        for(int i=0; i<=n; i++) {
            dp[i][0] = 1;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<=val;j++){
                
                if(nums[i-1] > j){
                     dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];  //same as subsets but changed in this line
                }
               
            }
        }
        
        return dp[n][val];
        
}