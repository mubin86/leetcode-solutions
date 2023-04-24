class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int, pair<int, int>>m;
        for(int i=0; i<nums.size(); i++){
            m.insert({nums[i], make_pair(i, nums[i])});
        }

        for(int i=0; i<operations.size(); i++){
            pair<int, int> p = m[operations[i][0]];
            p.second = operations[i][1];
            m.erase(operations[i][0]);
            m.insert({operations[i][1], p});
        }

        for(auto it = m.begin(); it != m.end(); it++){
            pair<int, int> p = it->second;
            nums[p.first] = p.second;
        }

        return nums;
    }
};