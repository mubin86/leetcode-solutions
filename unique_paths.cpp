class Solution {
public:
    int dp[101][101];
    int findPath(int m, int n, int i, int j){
        if(i >= m || j >= n){
            return 0;
        }

        if(i==m-1 && j==n-1){
            return 1;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        return dp[i][j] = findPath(m, n, i+1, j) + findPath(m, n, i, j+1);
    }

    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return findPath(m, n, 0, 0);
    }
};