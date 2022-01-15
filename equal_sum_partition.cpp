class Solution {
public:
    
    bool subset(vector<int>& nums, int val, int n){
        
        //**memoization-recursion-->TLE
//         if(val == 0){
//             return true;
//         }
//          if(n==0){
//             return false;
//         }
        
//         if(dp[n][val] != -1){
//             return dp[n][val];
//         }
        
       
//         if(nums[n-1] > val){
//           return dp[n][val] = subset(nums, val, n-1, dp);
//         }else{
//           return dp[n][val] = subset(nums, val-nums[n-1], n-1, dp) ||
//             subset(nums, val, n-1, dp);
//         }
        
        bool dp[n+1][val + 1];
        
        //dp initialization
        for(int j=0; j<=val; j++) {
            dp[0][j] = false;
        }
        for(int i=0; i<=n; i++) {
            dp[i][0] = true;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<=val;j++){
                
                if(nums[i-1] > j){
                     dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
               
            }
        }
        
        return dp[n][val];
        
    }
    
    bool canPartition(vector<int>& nums) {
        long int sum = 0;
        // vector<vector<int>> dp(201, vector<int> (200001, -1)); // for memo recursion    
        sum = accumulate(nums.begin(), nums.end(), sum);
        
        if(sum % 2 != 0){
            return false;
        }
   
        // return subset(nums, sum/2, nums.size(), dp); //for recursion4
        
        return subset(nums, sum/2, nums.size());
          
    }
};