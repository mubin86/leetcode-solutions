class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size() == 0){
            return ans;
        }
        string start = to_string(nums[0]);
        string end = "";

        for(int i=1; i<nums.size(); i++){
            if((nums[i] !=0 && -nums[i] ==nums[i-1]) || abs(nums[i]-nums[i-1]) > 1){
                ans.push_back(start+end);
                start = to_string(nums[i]);
                end = "";
            }else{
                end = "->" + to_string(nums[i]);
            }
        }

        ans.push_back(start+end);

        return ans;
    }
};