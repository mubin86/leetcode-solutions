class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<bool>sieve(4000001, true);
        sieve[1] = false;
        for(int i=2; i*i <=4000000; i++){
            if(sieve[i]){
                for(int j = i*i; j<=4000000; j+=i){
                    sieve[j] = false;
                }
            }
        }


        int result = 0;
        int m = nums[0].size()-1;
        int row = 0;;
        for(int i=0, j=m; i<nums.size(), j>=0; i++, j--){
            if(sieve[nums[i][i]]){
                result = max(result, nums[i][i]);
            }
            if(sieve[nums[i][j]]){
                result = max(result, nums[i][j]);
            }
        }

        return result;
    }
};