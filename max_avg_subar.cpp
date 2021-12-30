class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    
        double result;
  
        int temp=0; 
        int sum = INT_MIN;
        int j=0;
        
        
        for(int i = 0; i < nums.size(); i++){
            if((i+1) <= k){
                temp += nums[i];
                sum = temp;
                continue;
            }
                temp = temp - nums[j];
                temp = temp + nums[i];
            
                sum = max(sum, temp);
            
            
                j++;
        }
  
        result = double(sum) / k;
        
        return result;
    }
};