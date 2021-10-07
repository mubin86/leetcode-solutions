class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int count = 0;
//         for(int i = 0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 int n1= nums[i];
//                 int n2 = nums[j];
                
//                 int temp = n1^n2;
                
//                 while(temp){  
//                     if(temp&1){
//                         count++;
//                     }
//                     temp= temp>>1;              
//                 }
               
//             }
//         }
        
            // return count;
        
        int Count[32][2];
        memset(Count,0,sizeof Count);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<32;j++)
            {
                if(nums[i]&(1<<j))
                    Count[j][1]++;
                else
                    Count[j][0]++;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            ans+=(Count[i][1]*Count[i][0]);
        }
        return ans;
    }
};