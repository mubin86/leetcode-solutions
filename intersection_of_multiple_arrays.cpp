class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>result;
        map<int, int>m;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                m[nums[i][j]]++;
            }
        }
        
        for(auto it=m.begin(); it != m.end(); it++){
            if(it->second >= nums.size()){
                result.push_back(it->first);
            }
        }
        
        return result;
    }
};