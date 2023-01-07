class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long int, long long int> m;
        long long int n = nums.size();
        for(long long int i=0; i<n; i++)
        {
            m[i-nums[i]]++;
        }

        long long int toalPair = n*(n-1) / 2;
        long long int goodPair = 0;

        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second >= 2){
                goodPair += it->second*(it->second-1) / 2;
            }
        }

        return toalPair - goodPair;
    }
};