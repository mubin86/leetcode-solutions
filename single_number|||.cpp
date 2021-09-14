class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int>result;
        
        for(int i = 0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                m.insert({nums[i], m[nums[i]]++});
            }
            m.insert({nums[i], 1});
        }
        
        for(int i = 0; i<nums.size(); i++){
            if(m[nums[i]] == 1){
                result.push_back(nums[i]);
            }
        }
        
        return result;
    }
};