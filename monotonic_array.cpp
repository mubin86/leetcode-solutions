class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // nums={1,3,2};
        bool asc = false;
        bool desc = false;
        
        for(int i=0; i < nums.size()-1; i++){
            
            if( nums[i] < nums[i+1] ){
                asc = true;
            }
            if(nums[i] > nums[i+1]){
                desc = true;
            }
            
        }
        
        if(desc && asc){
            return false;
        }
            return true;
    }
};