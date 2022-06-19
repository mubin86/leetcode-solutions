class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0;
        int currmax = 0, currmin = 0 ;
        
        for(int i=0; i<nums.size(); i++){
            
            currmax = max(currmax+nums[i], nums[i]);
            
            currmin = min(currmin+nums[i], nums[i]);
            
            sum = max(sum, max(abs(currmax), abs(currmin)));
        }
        
        
        return sum;
    }
};