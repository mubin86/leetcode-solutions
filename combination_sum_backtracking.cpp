class Solution {
public:
    vector<vector<int>>result;

    void findCombination(vector<int>&candidates, int target, vector<int>&current, int i, int total){
        if(i >= candidates.size() || total > target){
            return;
        }

        if(total == target){
            result.push_back(current);
            return;
        }
        
        current.push_back(candidates[i]);
        findCombination(candidates, target, current, i, total+candidates[i]);
        current.pop_back();
        findCombination(candidates, target, current, i+1, total);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        findCombination(candidates, target, current, 0, 0);

        return result;
    }
};