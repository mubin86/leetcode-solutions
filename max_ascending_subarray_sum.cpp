class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int prev = nums[0];
        int result = nums[0];
        int temp = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            
            if(prev < nums[i]){
                temp += nums[i];
                result = max(result, temp);
            }else{
                temp = nums[i];
            }
            
              prev = nums[i];
        }
        
        return result;
    }
};