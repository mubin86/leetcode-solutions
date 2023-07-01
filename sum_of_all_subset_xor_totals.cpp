class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
       int n = nums.size();
       int result = 0;

       for(int i=1; i<(1<<n); i++){
           int current = 0;
           for(int j=0; j<n; j++){
               if(i & (1<<j)){
                   current ^= nums[j];
               }
           }

           result += current;
       }

       return result;
    }
};