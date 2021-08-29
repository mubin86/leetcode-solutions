class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int>m;
        
        int comp = INT_MIN;
        int result;
        
        for(int i=0; i< nums.size(); i++){
            int temp = m[nums[i]]++;
            
            if(temp > comp){
                comp = temp;
                result = nums[i];
            }
        }  
        return result;
    }
};