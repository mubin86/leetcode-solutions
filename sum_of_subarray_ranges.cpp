class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long result = 0;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int tempMin = min(nums[i], nums[j]);
                minNum = min(minNum, tempMin);
                
                int tempMax = max(nums[i], nums[j]);
                maxNum = max(maxNum, tempMax);
                
                result += abs(maxNum - minNum);
            }
            minNum = INT_MAX;
            maxNum = INT_MIN;
        }
        
        return result;
        
    }
};