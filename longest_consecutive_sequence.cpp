class Solution {
public:
    int longestConsecutive(vector<int>& nums) {  
        if(nums.size() == 0){
            return 0;
        }
        
        set<int>m;
        for(int i=0; i<nums.size(); i++){
             m.insert(nums[i]);
        }
        
        auto it = m.begin();
        int val = *it;
        int length = 1;
        int result = 1;
        ++it;
        
        for(; it != m.end(); ++it){
            int currentVal = *it;
            
            if(currentVal - val == 1){
                length++;
            }else{
                length = 1;
            }
            
            val = currentVal;
            result = max(result, length);
        }
        
        return result;
    }
};