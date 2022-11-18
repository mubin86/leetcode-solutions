class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>ans;
        vector<int>greater;
        int equalCount = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < pivot){
                ans.push_back(nums[i]);
            }else if(nums[i] == pivot){
                equalCount++;
            }else{
                greater.push_back(nums[i]);
            }
            
        }
        
        for(int j=0; j<equalCount; j++){
            ans.push_back(pivot);
        }
        
        for(int k=0;k<greater.size(); k++){
            ans.push_back(greater[k]);
        }
        
        return ans;
    }
};