class Solution {
public:
  int memo(int current, int prev, vector<int> &nums, vector<vector<int>> &dp){
        if(current == nums.size()) {
            return 0;
        }
      
        if(dp[current][prev+1] != -1) {
            return dp[current][prev+1];
        }
    
        int take=0;
        if(prev == -1 || nums[current] > nums[prev]) {
            take = 1 + memo(current+1, current, nums, dp);
        }
      
        int nottake = memo(current+1, prev, nums, dp);
        
        return dp[current][prev+1]=max(take, nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        
        return memo(0, -1, nums, dp);
    }
};