class Solution {
public:
    int dp[1001][1001];
    int pairChain(vector<vector<int>>& pairs, int i, int prev){
        if(i >= pairs.size()){
            return 0;
        }

        if(dp[i][prev+1] != -1){
            return dp[i][prev+1];
        }

        int taken=0, notTaken=0;

        notTaken = pairChain(pairs, i+1, prev);

        if(prev == -1 || pairs[prev][1] < pairs[i][0]){
            taken = 1 + pairChain(pairs, i+1, i);
        }

        return dp[i][prev+1] = max(taken, notTaken);

    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        memset(dp,-1,sizeof(dp));
        sort(pairs.begin(),pairs.end(),com);

        return pairChain(pairs, 0, -1);
    }

    private:
    static bool com(vector<int>&a, vector<int>&b){
        if(a[0] == b[0]){
            return a[1] < b[1];
        }

        return a[0] < b[0];
    }
};