class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result = -1;
        int minNum = INT_MAX;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                minNum = min(minNum, nums[i]);
                
                result = max(result, nums[i+1]-minNum);
                
            }
            
        }
        
        return result;
    }
};