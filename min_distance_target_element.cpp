class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        if(nums[start] == target){
            return 0;
        }
        
        int left = start - 1;
        int right = start + 1;
        
        while(1){
            if(left >= 0){
                if(nums[left] == target){
                    return abs(left - start);
                }
            }
            
            if(right < nums.size()){
                if(nums[right] == target){
                    return abs(right - start);
                }
            }
            
            left--;
            right++;
        }
        
        return 0;
    }
};