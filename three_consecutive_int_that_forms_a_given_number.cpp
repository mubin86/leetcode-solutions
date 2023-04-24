class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;
        
        if(num % 3 == 0){
            long long int quotient = num/3;

            ans.push_back(quotient-1);
            ans.push_back(quotient);
            ans.push_back(quotient+1);
        }

        return ans;
    }
};