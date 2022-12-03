class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
       
        sort(nums.begin(), nums.end());
        int count = 1;
        int minNum = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            
            int diff = nums[i] - minNum;
            
            if(diff > k){
                count++;
                minNum = nums[i];
            }
        
        }
        
        return count;
    }
};