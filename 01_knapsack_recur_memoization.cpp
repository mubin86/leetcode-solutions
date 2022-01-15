int dp[101][1001];
memset(dp, -1, sizeof(dp));
int n = wt.size();

int knapsack(vector<int>&wt, vector<int>&val, int w, int n){

    if(n==0 || w==0){
        return 0;
    }

    if(dp[n][w] != -1){
        return dp[n][w];
    }


    if(wt[n-1] <= w){
        return dp[n][w] = max( val[n-1] + knapsack(wt, val, w-wt[n-1], n-1),
                        knapsack(wt, val, w, n-1)
                   );
    }
    else{
       return dp[n][w] = knapsack(wt, val, w, n-1);
    }

}