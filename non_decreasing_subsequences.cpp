class Solution {
public:
    set<vector<int>>result;
    void find(vector<int> nums, vector<int>temp, int index){
        if(index > nums.size()){
            return;
        }

        if(temp.size() >= 2){
            result.insert(temp);
        }

        for(int i=index; i<nums.size(); i++){
            if(temp.size() == 0 || temp[temp.size()-1] <= nums[i]){
                temp.push_back(nums[i]);
                find(nums, temp, i+1);
                temp.pop_back();
            }
        }
    }


    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        find(nums, temp, 0);
        vector<vector<int>>ans(result.begin(), result.end());
        return ans;
    }
};