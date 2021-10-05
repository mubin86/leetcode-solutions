class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // nums={1,0,1,1,0,1};
        int res = 0;
        int count=0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] == 1){
                count++;
                if(count > res){
                    res = count; 
                }
            }else{
                count=0;
            }
        }
        
        return res;
    }
};