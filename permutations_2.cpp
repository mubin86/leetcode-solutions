class Solution {
public:
    set<vector<int>>result;
    vector<vector<int>>ans;
    
    void permutation(vector<int> nums, int l, int r){        
        if (l == r)   
        {
            result.insert(nums);
            return;
        }
        else
        {
            for (int i = l; i <= r; i++)
            {
                swap(nums[l], nums[i]);

                permutation(nums, l+1, r);
                
                swap(nums[l], nums[i]);
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permutation(nums, 0, nums.size()-1);
        
        for(auto it = result.begin(); it != result.end(); it++){
            ans.push_back(*it);
        }
        
        return ans;
    }
};