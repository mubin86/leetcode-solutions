class Solution {
public:
    vector<vector<int>>result;

    void findCombination(int index, vector<int>& candidates, vector<int>&current, int target){
        if(target < 0){
            return; 
        }

        if(target == 0){
            result.push_back(current);
            return;
        }

        int prev = -1;
        for(int i = index; i < candidates.size(); i++){
            if(candidates[i] == prev){
                continue;
            }
            current.push_back(candidates[i]);       
            findCombination(i+1, candidates, current, target-candidates[i]);
            current.pop_back();
            prev = candidates[i];
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>current;
        findCombination(0, candidates, current, target);

        return result;
    }
};