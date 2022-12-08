class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int result;
        vector<int>temp = nums;
        vector<int>newNums;

        while(temp.size() != 1){
            for(int i=0; i<temp.size()-1; i++){
                int val = (temp[i] + temp[i+1]) % 10;
                newNums.push_back(val);
            }

            temp = newNums;
            newNums.clear();
        }

        return temp[0];
        
    }
};