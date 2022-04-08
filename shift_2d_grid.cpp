class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
  
        if(k==0){
            return grid;
        }
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>>result(m, vector<int>(n, 0));
        
        for(int p=0; p < k; p++){
            
            for(int i=0; i<grid.size(); i++){
                
                for(int j = 0; j<grid[i].size(); j++){
                    
                    if(j < n-1){
                        
                        result[i][j+1] = grid[i][j];
                        
                    }else if(i == m-1 && j == n-1){
                        result[0][0] = grid[i][j];
                    }
                    else if(j == n-1){
                        result[i+1][0] = grid[i][j];
                    }
                    
                }
            }
            
            for(int i=0; i< m; i++){
                for(int j =0; j<grid[i].size(); j++){
                    grid[i][j] = result[i][j];
                }
            }
            
            
        }
        
        //optimize solutions can be done by using vector reverse and some other logic
        
         return result;
    }
};