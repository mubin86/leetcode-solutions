class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // nums={6,2,6,5,1,2};
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for(int i =0; i<nums.size(); i+=2){
            cout<<"i is "<<i<<endl;
            sum += nums[i];
        }
        
        return sum;
    }
};