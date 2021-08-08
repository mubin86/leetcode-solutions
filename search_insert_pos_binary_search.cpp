class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {    
        if(target < nums[0]){
            return 0;
        }
        
        int start=0;
        int end = nums.size() - 1;
        int mid = (start+end)/2;
        
        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }     
            if(nums[mid] < target){
                start = mid+1;
            }else{
                end = mid-1;
            }
            
            mid = (start + end)/2;
        }
        
        return mid + 1;
    }
};