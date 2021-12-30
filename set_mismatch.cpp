class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
     
         int max = nums.size();
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
 
        unordered_map<int, int>::iterator it;
        vector<int> result;
        
        for(int i=0; i< nums.size(); i++){
            if(m[nums[i]] > 1){
                result.push_back(nums[i]);
                break;
            }
        }
        
        for(int i=0; i< nums.size(); i++){   
             if(m.find(i+1) == m.end()){
                result.push_back(i+1);
                break;
            }
            
        }
        
       return result;
        
    }
};