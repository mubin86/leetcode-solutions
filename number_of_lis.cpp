class Solution {
public:
    typedef pair<int, int> p;
    
    int findNumberOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        vector<p> memo(n+1, make_pair(-1, -1));
        return helper(nums, memo, 0, -1).second;
    }

private:
    p helper(vector<int>& nums, vector<p>& memo, int idx, int prev)
    {
        if (idx == nums.size()){
            return make_pair(0, 1);
        }
        if (memo[prev+1] != make_pair(-1, -1)) {
            return memo[prev+1];
        }
        
        p take = make_pair(0, 0), notTake = make_pair(0, 0);
         
        if (prev==-1 || nums[idx] > nums[prev]) 
        {
            take = helper(nums, memo, idx+1, idx);
            take.first++;
        }
        notTake = helper(nums, memo, idx+1, prev);

        if (take.first == notTake.first) {
            return memo[prev+1] = make_pair(take.first, take.second+notTake.second);
        }
        else if (take.first > notTake.first) {
            return memo[prev+1] = take;
        }
            return memo[prev+1] = notTake;
    }
};