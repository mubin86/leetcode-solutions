class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int result = 0;
        for(int i=0; i < nums.size(); i++){
            
            int temp = nums[i];
            int count = 0;
            
            while(temp != 0){
                temp = temp / 10;
                count += 1;
            }
            
            if(count % 2 ==0){
                result += 1;
            }
            
        }
        
        return result;
    }
};