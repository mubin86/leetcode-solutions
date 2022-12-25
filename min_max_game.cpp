class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        vector<int>newNums = nums;
        vector<int>temp;
        int i = 0;

        if(nums.size() == 1){
            return nums[0];
        }

        while(1){
            while(i<newNums.size()/2){
                if(i%2 == 0){
                    temp.push_back(min(newNums[2*i], newNums[2*i + 1]));
                }else{
                    temp.push_back(max(newNums[2*i], newNums[2*i + 1]));
                }

                i++;
            }

            newNums = temp;
            i=0;

            if(temp.size() == 1){
              return temp[0];
            }
            temp.clear();  
        }

        return 0;
    }
};