class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         // nums={100,1,11,1,120,111,123,1,-1,-100};
        // nums={1,2,3,4, 3};
       vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            bool flag = false;
            int j = i+1;
            int k= 0;
            
            while(j<nums.size()){
                     if(nums[j] > nums[i]){
                        ans.push_back(nums[j]);
                        flag=true;
                        break;
                     }
                         
                j++;

            }
            
            if(!flag){
                 while(k<i){
                     if(nums[k] > nums[i]){
                            ans.push_back(nums[k]);
                            flag=true;
                            break;
                    }
                    
                     k++;
                }
            }
     
            
            if(!flag){
                 ans.push_back(-1);
            }
        }
        
        return ans;
    }
};
