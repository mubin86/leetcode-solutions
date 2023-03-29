class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int distance = INT_MAX;
        int result;

        for(int i=0; i<nums.size(); i++){
            int diff = abs(nums[i] - 0);
            if(diff <= distance){
                distance = diff;
                result = nums[i];
            }
        }

        return result;
    }
};