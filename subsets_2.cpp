class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>ansSet;
        vector<vector<int>> result;

        result.push_back({});
        vector<int>temp;
        int n = nums.size();
        
        for(int i=1; i<(1<<n); i++){
            for(int j=0; j<nums.size(); j++){
                if(i & (1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            ansSet.insert(temp);
            temp.clear();
        }

        for(auto it= ansSet.begin(); it != ansSet.end(); it++){
            result.push_back(*it);
        }
        
        return result;
    }
};