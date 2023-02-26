class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int smallNum = nums[0];
        int largeNum = nums[nums.size()-1];

        for(int i = smallNum; i>1; i--){
            if(smallNum%i == 0 && largeNum % i == 0){
                return i;
            }
        }

        return 1;
    }
};