class Solution {
public:
    
    int findMaxDfs(vector<vector<int>>&grid,int i, int j, int m, int n){
        if(i <0 || j<0 || i>=m || j>=n)return 0;
        if(grid[i][j] <= 0)return 0;
        
        grid[i][j] = -grid[i][j];  //mark visited as true
        
        int left = findMaxDfs(grid,i,j-1,m,n);
        int right = findMaxDfs(grid,i,j+1,m,n);
        int up = findMaxDfs(grid,i-1,j,m,n);
        int down = findMaxDfs(grid,i+1,j,m,n);
        
        grid[i][j] = -grid[i][j]; //mark visited as false before return
        
        return max(max(left,right),max(up,down)) + grid[i][j];
    }
    
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(grid[i][j] > 0){
                    int count = findMaxDfs(grid,i,j,m,n);
                    maxGold = max(count,maxGold);
                }
            }
        }
        return maxGold;
    }

};