class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = 0;
        int result =INT_MAX;
        int finalsum=0;
        for(auto i = 0; i<nums.size(); i++){
            for(auto j=i+1; j<nums.size(); j++){
                 sum = nums[i] + nums[j];
                int temp=sum;
                for(int k=j+1; k<nums.size(); k++){
                    sum = sum + nums[k];
                    int diff;
                    if(target> sum){
                        diff = target-sum;
                    }
                    else{
                        diff = sum-target;
                    }
                    
                    if(diff<result){
                        result=diff;
                        finalsum=sum;
                    }
                    
                    //at the end
                    sum=temp;
                    
                }
            }
        }
        return finalsum;
    }
};