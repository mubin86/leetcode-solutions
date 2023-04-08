typedef long long ll;
class Solution {
public:
    int dp[502];
    int find(vector<int>& arr, int k, int ind)
    {
        if(ind >= arr.size()){
            return 0;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }
        int n = arr.size();
        int maxNum = INT_MIN;
        int finalSum = INT_MIN;
        int len = 0;

        for(int i = ind; i < min(n, ind+k); i++)
        {
            len++;
            maxNum = max(maxNum, arr[i]);
            int ans = maxNum*len + find(arr, k, i+1);
            finalSum = max(ans, finalSum);
        }
        
        return dp[ind] = finalSum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
        memset(dp, -1, sizeof dp);
        ll ans = find(arr, k, 0);
        return ans;
    }
};