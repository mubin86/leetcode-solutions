class Solution {
public:
    int findLHS(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
        
//         int left = 0; right = 1;
//         int result = 0;
        
//         while(right <nums.size()){
//             int diff = nums[right] - nums[left];
            
//             if(diff == 1){
//                 result = max(result, right-left+1);
//             }
            
//             if(diff < 1){
//                 right++;
//             }
//             else{
//                 left++;
//             }
            
//         }
//         return result;
        
       
        sort(nums.begin(), nums.end());
        unordered_map<int , int>m;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        int result = 0;
        
        for(int i=0; i<nums.size()-1; i++){
            if((nums[i+1] - nums[i]) == 1){
                int temp = m[nums[i+1]] + m[nums[i]];
                result = max(result, temp);
            }
        }
        
        return result;
    
    }
};