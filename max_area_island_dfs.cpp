class Solution {
public:
    int dfs(vector<vector<int>>& a,int sr,int sc,int r,int c){
        // int ans=0;
        
        if(sr<0 || sr>=r || sc<0 ||sc>=c || a[sr][sc]!=1){
             return 0;
        }
         
        a[sr][sc]=2;     
        // ans++;
        // ans+=dfs(a,sr-1,sc,r,c);
        // ans+=dfs(a,sr,sc+1,r,c);
        // ans+=dfs(a,sr+1,sc,r,c);
        // ans+=dfs(a,sr,sc-1,r,c);
        
        //***same**//
        
        int right =dfs(a,sr,sc+1,r,c);
        int left = dfs(a,sr,sc-1,r,c);
        int top =dfs(a,sr-1,sc,r,c);
        int bottom = dfs(a,sr+1,sc,r,c);
        
        return (1 + (right+left+top+bottom));
        // return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    int t=dfs(a,i,j,n,m);
                    ans=max(t,ans);
                }
            }
        }
        return ans;
    }
};