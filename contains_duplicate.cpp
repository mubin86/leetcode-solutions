class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>m;
        
        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) == m.end()){
                m.insert({nums[i], nums[i]});
            }else{
                return true;
            }
            
        }
        
        return false;
    }
};