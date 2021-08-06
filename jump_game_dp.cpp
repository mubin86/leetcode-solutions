class Solution {
public:
        int jump(vector<int>& nums) {
            
            
            //*****simple solution
            
    //         int end, i;
    //         end = nums.size() - 1; //end pointer
    //         i = 0; // starting of array
    //         int jumps = 0; // count of jumps
    //         while(i < nums.size() && end!=0) // when the end pointer reaches the first index we stop
    //         {
    //             if(end - i <= nums[i]) // if the end can be reached from the current position or not
    //             {
    //                 end = i; // if yes then change the end to current position 
    //                 jumps++; // increment the jumps
    //                 i = 0; // and start again to reach this updated end
    //             }
    //             else
    //             i++; // if not then just go to the next index
    //         }
            
    //         return jumps;
            
            
            //*****dp solution**********/////
            int n=nums.size();
            vector<int> dp(n,INT_MAX);
            dp[0]=0 ;
            for(int i=1;i<n;i++)
            {
            for(int j=0;j<=i;j++)
            {
                if(nums[j]>=i-j)
                {
                    dp[i]=min(dp[i],1+dp[j]);
                }
            }
                
            }
            return dp[n-1];
            
    
        }
};