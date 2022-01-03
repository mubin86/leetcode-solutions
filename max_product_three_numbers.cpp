class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    
//         int n1,n2,n3;
//         int result = INT_MIN;
//         int temp;
        
//        for(int i=0; i<=nums.size()-3; i++){
//            n1 = nums[i];
           
//            for(int j = i+1; j<nums.size(); j++){
//                n2 = nums[j];
               
//                for(int k = j+1; k<nums.size(); k++){
//                    n3 = nums[k];
//                    temp = n1*n2*n3;
                   
//                    result = max(result, temp);
//                }
//            }
           
//        }
        
//         return result;
        
          int ans=INT_MIN,n=nums.size();
                sort(nums.begin(),nums.end());

                int x=nums[n-3];
                int y=nums[n-2];
                int z=nums[n-1];
                 int a=nums[0];
                int b=nums[1];


                ans=max(ans,x*y*z);         // when whole array is -ve or +ve
                 ans=max(ans,a*b*z);   
    
        return ans;
    
    }
        
    
};