class Solution {
public:
    int minMoves2(vector<int>& nums) {
  
    int n = nums.size();
     int count=0;
     sort(nums.begin(),nums.end());
        
        int mid = n/2;
        
        int midnum=nums[mid]; 
       
        for(int i = 0;i<n;i++) {
            count += abs(nums[i]-midnum);
        }
      
        return count;
    }
};