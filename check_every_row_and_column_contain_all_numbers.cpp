class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        vector<int>tempRow(matrix.size()+1, 0);
        vector<int>tempColumn(matrix.size()+1, 0);
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(tempRow[matrix[i][j]] == 0){
                    tempRow[matrix[i][j]] = 1;
                }else{
                    return false;
                }
                if(tempColumn[matrix[j][i]] == 0){
                    tempColumn[matrix[j][i]] = 1;
                }else{
                    return false;
                }         
            }
            fill(tempRow.begin(), tempRow.end(), 0);
            fill(tempColumn.begin(), tempColumn.end(), 0);
        }                
        return true;
    }
};