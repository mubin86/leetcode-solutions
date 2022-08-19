class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int countNegative = 0;
        bool flag = false;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] < 0){
                countNegative += 1;
            }else if(nums[i] == 0){
                flag = true;
                break;  
            }
            
        }
        
        if(flag){
            return 0;
        }
        
        if(countNegative%2 == 0){
            return 1;
        }else{
            return -1;
        }
    }
};