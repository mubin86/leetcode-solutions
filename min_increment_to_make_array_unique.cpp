class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        vector<int>arr;
        sort(nums.begin(),nums.end());
        arr.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            if(arr.back()<nums[i]){
                arr.push_back(nums[i]);
            }
            else{
                ans += abs(arr.back()+1-nums[i]);
                arr.push_back(arr.back()+1);
            }
        }

        return ans;
    }
};