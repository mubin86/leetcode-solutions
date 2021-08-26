class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>temp;
        int result = 0;
        int count;
        bool flag = false;
        
        for(int i = 0; i< nums.size(); i++){
            temp[nums[i]] = 0;
        }
            
        for(int i = 0; i< nums.size(); i++){
            count = temp[nums[i]] + 1;
            temp[nums[i]] = count;
        }
        
        for(int i = 0; i< nums.size(); i++){
        if(temp[nums[i]] <2){
            result = nums[i];
            flag = true;
        }
            if(flag == true)
                break;
        }
    
        return result;
       
    }
};