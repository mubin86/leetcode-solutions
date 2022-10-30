class Solution {
public:
    int countElements(vector<int>& nums) {
        int result = 0;
        bool smallFlag = false;
        bool greaterFlag = false;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){        
                if(nums[i] > nums[j]){
                    greaterFlag = true;
                }else if(nums[i] < nums[j]){
                    smallFlag = true;
                }
                
                if(greaterFlag && smallFlag){
                    result++;
                    break;
                }
            }
            
            smallFlag = false;
            greaterFlag = false;
        }
        
        return result;
    }
};