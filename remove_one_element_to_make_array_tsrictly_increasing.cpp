class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int prev = nums[0];
        int removeCount = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] <= prev){
                removeCount++;
                if(i-2 < 0){
                    prev = min(nums[i], prev);
                    continue;
                }

                if(nums[i] > nums[i-2]){
                    prev = nums[i];
                }
                
            }else{
                prev = nums[i];
            }

            if(removeCount == 2){
                return false;
            }
        }

        return true;
    }
};