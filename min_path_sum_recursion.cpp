class Solution {
public:
    int result = INT_MAX;;

    void find(vector<vector<int>>& grid, int i, int j, int sum, int row, int col){
        if(i >= row || j >= col){
            return ;
        }

        sum += grid[i][j];

        if(i == row-1 && j == col-1){
            result = min(result, sum);
            return;
        }

        find(grid, i, j+1, sum, row, col);
        find(grid, i+1, j, sum, row, col);

    }


    int minPathSum(vector<vector<int>>& grid) {
        find(grid, 0, 0, 0, grid.size(), grid[0].size());

        return result;
    }
};