class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int>m;
        
        for(int i = 0; i<nums.size(); i++){
            auto it = m.find(nums[i]);
          
            if(it == m.end()){
              m.insert({nums[i], i});
          }else{
              if(abs(i - m[nums[i]]) <= k){
                  return true;
              }else{
                  it->second = i;
              }
          }
        }
        
        return false;
    }
};