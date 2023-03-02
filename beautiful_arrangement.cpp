class Solution {
public:
    int count = 0;
    void generatePermutation(int index, int n, vector<int>&nums){
        if(index > n){
            count++;
            return;
        }

        for(int i=index; i<=n; i++){
            if((nums[i] % index == 0) || (index % nums[i] == 0)){
                swap(nums[index], nums[i]);
                generatePermutation(index+1, n, nums);
                swap(nums[index], nums[i]);
            }
        }
    }


    int countArrangement(int n) {
        vector<int>nums(n+1);
        for(int i=1; i<=n; i++){
            nums[i] = i;
        }

        generatePermutation(1, n, nums);
        return count;
    }
};