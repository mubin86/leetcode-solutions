class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        for (int i=0;i<mat.size();i++){
            vector<int>v1;
            int row = i;
            int col = 0 ;
            while(row < mat.size() && col < mat[0].size()){
                v1.push_back(mat[row][col]);
                col++;
                row++;
            }
            sort(v1.begin() , v1.end());
            row = i;
            col = 0 ;
            while(row < mat.size() && col < mat[0].size()){
                mat[row][col] = v1[col];
                col++;
                row++;
            }
        }
        
        for(int i=0;i<mat[0].size() ; i++){
            vector<int>v1;
            int col = i ; 
            int row = 0 ;
            while(row < mat.size() && col < mat[0].size()){
                v1.push_back(mat[row][col]);
                col++;
                row++;
            }
            sort(v1.begin() , v1.end());
            row = 0;
            col = i ;
            while(row < mat.size() && col < mat[0].size()){
                mat[row][col] = v1[row]; 
                col++;
                row++;
            }
        }

        return mat;
    }
};