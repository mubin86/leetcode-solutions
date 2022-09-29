class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            int leftSum = 0;
            int rightSum = 0;
            
            for(int j = 0; j < i; j++){
                leftSum += nums[j];
            }
            
            for(int k = i+1; k < nums.size(); k++){
                rightSum += nums[k];
            }
            
            if(leftSum == rightSum){
                return i;
            }
            
        }
        
        return -1;
    }
};