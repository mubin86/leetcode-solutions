class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        queue<int>q;
        int count=0;
        
        for(int i =0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                count++;
                q.push(mat[i][j]);
            }
        }
        
        if(count != (r*c)){
            return mat;
        }
        
        vector<vector<int>>result(r, vector<int>(c));
        
        for(int i=0; i<r; i++){     
            for(int j=0; j<c; j++){
                result[i][j] = q.front();
                q.pop();
            }
        }
        
        return result;
    }
};