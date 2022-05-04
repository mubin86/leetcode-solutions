class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     
        vector<int>result;
        result.push_back(nums[0]);
        
        int prev = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            int current = prev+nums[i];
            result.push_back(current);
            prev = current;   
        }
        
        return result;
    }
};