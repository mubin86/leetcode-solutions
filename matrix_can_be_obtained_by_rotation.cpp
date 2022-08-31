class Solution {
public:
    queue<int>q;
    void insertQueue(vector<vector<int>>& mat){
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                q.push(mat[i][j]);
            }
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target){
            return true;
        }
        
        for(int k=1; k<=3; k++){
            insertQueue(mat);
            
            for(int i=mat.size()-1; i>=0; i--){
                for(int j=0; j<mat[i].size(); j++){
                    int val = q.front();
                              q.pop();
                    mat[j][i] = val;      
                }
            }
            
            if(mat == target){
                return true;
            }
        }
        
        return false;
    }
};