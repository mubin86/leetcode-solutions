class Solution {
public:
    void solve(vector<int>& nums, int &ans, int xors, int i){
        if(i == nums.size()){
            ans += xors;
            return;
        }

        solve(nums, ans, xors^nums[i], i+1);
        solve(nums, ans, xors, i+1);
    }
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        int xors = 0;

        solve(nums, ans, xors, 0);
        return ans;
    }
};