class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int count = 0;
        int result=0;
        bool found=false;
        int zeroesCount = 0;
        int lastIndex = -1;
   
        while(i<nums.size()){

            if(nums[i]==1){
               count += 1;
               result = max(result,count);
               i++;
            }else{
                zeroesCount++;
                if(zeroesCount < 2){
                    lastIndex = i;
                    i++;
                }else{
                    i = lastIndex+1;
                    count = 0;
                    zeroesCount = 0;   
                }
                
            }
        }
            
        
        return result == nums.size() ? result-1 : result;

      }
};