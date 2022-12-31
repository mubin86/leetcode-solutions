class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, multiset<int, greater<int>> > mapOfSet;
        int result = -1; 

        for(int i=0; i<nums.size(); i++){
            int digitSum = 0;
            int n = nums[i];

            while(n != 0){
                int rem = n % 10;
                n /= 10;
                digitSum += rem;
            }
            mapOfSet[digitSum].insert(nums[i]);
        }

        for(auto it = mapOfSet.begin(); it != mapOfSet.end(); it++){

           multiset<int, greater<int>> s = it->second;
           
           if(s.size() >= 2){
                auto itr = s.begin();
                int m = *itr;
                itr++;
                int n = *itr;

                if(m + n > result){
                    result = m+n;
                }
           }
        }

        return result;
    }
};