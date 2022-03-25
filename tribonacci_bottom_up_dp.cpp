class Solution {
public:
    
    int tribonacci(int n) {
        int nums[38];
        memset(nums, 0, sizeof(nums)); 
        nums[0] = 0;
        nums[1] = 1;
        nums[2] = 1;

        for(int i = 3; i <= n; i++){
            nums[i] = nums[i-1] + nums[i-2] + nums[i-3];
           
        }
        
        return nums[n];

    }
};