class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        int low = 0;
        int high = nums.size()-1;
        
        int mid = (low + high)/2;
        
        bool flag = false;
        
        while(low <= high){
            if(nums[mid] == target){
                flag = true;
                break;
            }
            
            if(nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
            
            mid = (low + high)/2;
        }
        
        int l = -1;
        int r = -1;
        
        if(flag){
            l = mid;
            r = mid;
            
            while(l > 0 && nums[l-1] == target){
                l = l-1;
            }
            
            while(r+1 < nums.size() && nums[r+1] == target){
                r = r+1;
            }
        }
        
        result.push_back(l);
        result.push_back(r);
        
        
        return result;
    }
};