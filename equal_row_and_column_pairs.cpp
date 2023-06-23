class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;

        for(int i=0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){
                bool flag = true;
                for(int k=0; k<grid[i].size(); k++){
                    if(grid[i][k] != grid[k][j]){
                        flag = false;
                        break;
                    }
                }

                if(flag){
                    count++;
                }
            }
        }

        return count;
    }
};