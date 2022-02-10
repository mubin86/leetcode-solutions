class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        for(int i=0; i < matrix.size(); i++){
            for(int j=0; j < matrix[i].size(); j++){
                
                if(i+1 < matrix.size() && j+1 < matrix[i].size()){
                    
                    if(matrix[i+1][j+1] != matrix[i][j]){
                         return false;
                    }
                
                }
    
                
            }
            
        }
        
        return true;
        
    }
};