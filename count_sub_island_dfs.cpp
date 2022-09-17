class Solution {
public:
    void dfs(int i, int j , int m ,int n , vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int &ans){
        if(i<0 || j<0 || i>=m || j>=n || grid2[i][j]==0){
            return ;
        }
        if(grid1[i][j]==0 && grid2[i][j]==1){
            ans = false;
        }
        grid2[i][j]=0;
        dfs(i+1 , j , m , n , grid1 , grid2, ans);
        dfs(i-1 , j , m , n , grid1 , grid2, ans);
        dfs(i , j+1 , m , n , grid1 , grid2, ans);
        dfs(i , j-1 , m , n , grid1 , grid2, ans);
        
    }
     int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
     int m=grid2.size();
     int n=grid2[0].size();
     int ans;
     int res=0;    
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             if(grid2[i][j]==1){
                 ans=1;
                 dfs(i , j , m , n , grid1 , grid2 , ans);
                 if(ans){
                     res += 1;
                 }
             }
         }
     }
         return res;
    }
};