class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int result = INT_MIN;
        int count = 1;
        bool checked = false;
        
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                count += 1;
                result = max(count, result);
                checked=true;
            }else{
                count = 1;
            }   
            
        }
        if(!checked){
            return 1;
        }
        
        return result;
    }
};