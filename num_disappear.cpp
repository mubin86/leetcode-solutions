class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>result;
     
        for(int i=0; i<nums.size(); i++){
           s.insert(nums[i]);
        }
        
        for(int i=1; i<=nums.size(); i++){
            if(s.find(i) == s.end()){
                result.push_back(i);
            }
        }
        
        return result;
    }
};