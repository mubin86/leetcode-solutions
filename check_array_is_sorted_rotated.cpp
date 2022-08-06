class Solution {
public:
    bool check(vector<int>& nums) {
        
        int prev = nums[0];
        int minNum = nums[0];
        bool flag = false;
        
        for(int i=1; i <nums.size(); i++){
            if(flag){
                if( nums[i] > minNum || nums[i] < prev){
                    return false;
                }
                prev = nums[i];
                continue;
            }
            
            
            if(prev <= nums[i] && !flag){
                minNum = min(minNum, nums[i]);
                prev = nums[i];
            }else{
                if(nums[i] > minNum){
                    return false;
                }
                flag = true;
                prev = nums[i];
            }
        }
        
        
        return true;
    }
};