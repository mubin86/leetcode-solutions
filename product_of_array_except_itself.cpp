class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int result = 1;
        int countZeroes = 0;
        vector<int>ans(nums.size(), 0);

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                countZeroes++;
            }
            if(nums[i] != 0){
                result *= nums[i];
            }
            if(countZeroes >=2){
                break;
            }
        }

        if(countZeroes >= 2){
            return ans;
        }else if(countZeroes == 1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0){
                    ans[i] = result;
                    break;
                }
            }
        }else{
            for(int i=0; i<nums.size(); i++){
                ans[i] = result/nums[i];
            }
        }

        
        return ans;
    }
};