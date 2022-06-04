class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int>result(n);
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        
        int lSum = 0;
        int lNum = 0;
        
        for(int i=0; i<n; i++){
            
            int rSum = sum-lSum-nums[i];
            int rNum = n-1-lNum; //** 1 for current element
            
            result[i] = (lNum*nums[i] - lSum) + (rSum-rNum*nums[i]);
            
            lNum++;
            lSum += nums[i];
        }
        
        return result;
    }
};