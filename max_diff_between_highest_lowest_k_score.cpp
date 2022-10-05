class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       if(k== 1){
            return 0;
       }
       sort(nums.begin(), nums.end(), greater<int>());
        
       int result = INT_MAX;
       for(int i=0; i<=nums.size()-k; i++){
           int temp = nums[i] - nums[i+k-1];

           result = min(result, temp);

       }
        
        return result;
    }
};