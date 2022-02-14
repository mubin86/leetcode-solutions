class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set< vector<int> > resultSet;
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>>result;
        
        vector<int>temp;
        
        for(int i=0; i < nums.size(); i++){
            
//             for(int j = i+1; j< nums.size(); j++){
                
                
//                 for(int k= j+1; k < nums.size(); k++){
//                     if(nums[i] + nums[j] + nums[k] > 0){
//                         break;
//                     }
                    
//                     if(nums[i] + nums[j] + nums[k] == 0){
//                         temp.push_back(nums[i]);
//                         temp.push_back(nums[j]);
//                         temp.push_back(nums[k]);
                        
//                         resultSet.insert(temp);
                        
//                         temp.clear();
                        
//                     }
//                 }
                
//             }
            
            
            int low = i+1;
            
            int high = nums.size() - 1;
            
         
            
            while(low < high){
                
                 int sum = nums[i] + nums[low] + nums[high];
                
                if(sum == 0){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        
                        resultSet.insert(temp);
                        low++;
                        high--;
                        
                        temp.clear();
                    
                }
                
                else if(sum > 0){
                    high = high -1;
                }
                
                else{
                    low = low + 1;
                }
                
            }
            
        }
        
        set< vector<int> >::iterator itr;
        
        for (itr = resultSet.begin(); itr != resultSet.end(); itr++) {
          
            result.push_back(*itr);     
            
        }
        
        return result;
        
    }
};