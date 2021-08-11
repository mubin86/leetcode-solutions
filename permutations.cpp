class Solution {
public:
    void permutations(vector<vector<int>>& result, vector<int>& nums, int l, int r){
        if(l == r){
            result.push_back(nums);
            return;
        }else{
              for(auto i = l; i<=r; i++){
                swap(nums[l], nums[i]);

                permutations(result, nums, l+1 , r);
                
                swap(nums[l], nums[i]);

            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        int l = 0;
        int r = nums.size() - 1; 
        permutations(result, nums, l , r);
        return result;  
    }
};