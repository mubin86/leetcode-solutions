class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
     
        multiset<int>m;
        int count = 0;
        
        for(int i=0; i<nums.size(); i++){
            int val = k - nums[i];
            
            if(val > 0){
               auto it = m.find(val);
               if(it != m.end()){
                    count += 1;
                    m.erase(it);
                }else{
                    m.insert(nums[i]);
                } 
            }
            
        }
        
        return count;
    }
};