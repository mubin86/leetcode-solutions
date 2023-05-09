class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        unordered_map<int, int> m;
        
        for(int i=0; i<nums.size(); i++){
            m.insert({nums[i], nums[i]});
        }

        for(int i=0; i<nums.size(); i++){
            if(m.find(-nums[i]) != m.end()){
                return nums[i];
            }
        }

        return -1;
    }
};