class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int cur = nums[0], res = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            
            cur = cur < 0 ? nums[i] : cur + nums[i];
            res = max(res, cur);
        }
        return res;
    }
};