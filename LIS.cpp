class Solution {
public:
    int lengthOfLIS(vector<int>& ar) {
//         // nums={0,1,0,3,2,3};
//          nums={4, 10, 4, 3, 8, 9};
//         int sum = INT_MIN;
//         for(int i= 0; i<nums.size(); i++){
//             int count = 1;
//             int prev = nums[i];
//             for(int j = i+1; j<nums.size(); j++){
//                 if(prev == nums[j]){
//                     continue;
//                 }
                
//                 if(prev > nums[j]){
//                     // continue;
//                     count--;
//                 }
//                 prev = nums[j]; 
//                 count++;
              
//             } 
//             if(count> sum){
//                 sum = count;
//             }
//         }
        
            int d[ar.size()], ans = 1;

            for(int i=0;i<ar.size();i++){
                int mx = 1;
                
                for(int j=0;j<i;j++){
                    
                    if(ar[j] < ar[i]){
                        
                        mx= max(mx, d[j]+1);
                    }
                }
                
                d[i] = mx;
                ans=max(mx,ans);
            }
            return ans;

    }
};