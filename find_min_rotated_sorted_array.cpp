class Solution {
public:
    int findMin(vector<int>& nums) {
       // int num = *min_element (nums.begin(), nums.end());
       //  return num;
        
        int num = nums[0];
        for(int i= 1; i<nums.size(); i++){
            if(nums[i] > num){
                continue;
            }
            
            num = nums[i];
            break;
        }
        
        return num;
    }
};