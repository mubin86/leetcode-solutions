class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>qpos;
        queue<int>qneg;
        vector<int>result;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                qpos.push(nums[i]);
            }else{
                qneg.push(nums[i]);
            }
        }
        int num;
        
        while(!qpos.empty()){
            num = qpos.front();
                  qpos.pop();
            
            result.push_back(num);
            
            num = qneg.front();
                  qneg.pop();
            
            result.push_back(num);
        }
        
        return result;
        
    }
};