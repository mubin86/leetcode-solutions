class Solution {
public:
    int f(int i, int last, vector<int>& nums, vector<vector<int>>& dp){
       if(dp[i][last+1]!=-1) {
           return dp[i][last+1];
       }
       if(i==nums.size()) {
           return dp[i][last+1]= 0;
       }
  
       int len = 0 + f(i+1, last, nums, dp);

       if(last==-1 || nums[i]>nums[last]){
           len = max(len, 1+f(i+1, i, nums, dp));
       }
       
       return dp[i][last+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> dp(n+1, vector<int>(n+2, -1));
        return f(0, -1, nums, dp);
    }
};