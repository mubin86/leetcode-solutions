class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int>m;
        int result = INT_MIN;
        int sum = 0;
        int start = 0;
        int j;
        
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                int temp = m[nums[i]];
                
                for(j=start; j<=temp;j++){
                    sum -= nums[j];
                    m.erase(nums[j]);
                }
                start = j;
                sum += nums[i];
                m.insert({nums[i], i});
                result = max(result, sum);
                
            }else{
              sum += nums[i];
              m.insert({nums[i], i});
              result = max(result, sum);
            }
        }
        
        return result;
    }
};