class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int totalOne = 0;
        int ans = INT_MAX;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                totalOne++;
            }
        }
        
        nums.insert(nums.end(), nums.begin(), nums.end());
        
        int temp = 0;
        int start = 0;
        bool flag = false;
        
        for(int i=0; i<nums.size(); i++){
            if(i < totalOne){
                if(nums[i] == 0){
                    temp++;
                }
                
                if(i == totalOne-1){
                    ans = min(ans, temp);
                }
                continue;
            }
            
            if(nums[start] == 0){
                temp -= 1;
            }
            if(nums[i] == 0){
                temp += 1;   
            }
            
            ans = min(ans, temp);
            start++;
        }
        
        return ans;
        
    }
};