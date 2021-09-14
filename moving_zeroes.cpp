class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> q;
            int n = nums.size();

            for(int i=0; i<n; i++)
            {
                if(nums[i] != 0)
                {
                    q.push(nums[i]);
                }
            }

            for(int i=0; i<n; i++)
            {
                if(!q.empty())
                {
                    nums[i] = q.front();
                    q.pop();
                }
                else
                    nums[i] = 0;
            }
    }
    
};