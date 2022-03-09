class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>result;
        
        for(int i=0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                result.insert(result.begin(), nums[i]);
            }else{
                result.push_back(nums[i]);
            }
            
            
        }
        
        return result;
    }
};