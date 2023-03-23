class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int sum = 0;
        bool flag = false;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] % 2 == 0){
                flag = true;
                sum += nums[j];
            }
        }

        for(int i=0; i<queries.size(); i++){
            vector<int>temp = queries[i];
            int prev = nums[temp[1]];
            nums[temp[1]] = nums[temp[1]] + temp[0];
            if(prev % 2 == 0 && temp[0] % 2 == 0){
                sum += temp[0];
            }else if(prev % 2 == 0 && temp[0] % 2 != 0){
                sum -= prev;
            }else if(prev % 2 != 0 && temp[0] % 2 != 0){
                sum += temp[0] + prev;
            }
          
            ans.push_back(sum);
        }

        return ans;
    }
};