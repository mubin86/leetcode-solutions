class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         int n = nums.size();
        vector<vector<int>>ans;
        vector<int>temp = {};
        ans.push_back(temp);

        for(int i=1; i<(1<<n); i++){
            for(int j=0; j<nums.size(); j++){
                if(i & (1<<j)){
                    temp.push_back(nums[j]); 
                }
            }

            ans.push_back(temp);
            temp.clear();
        }

        return ans;
    }
};