class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        queue<int> q;
        vector<vector<int>>result(matrix[0].size(), vector<int>(matrix.size()));
        
        for(int i=0; i< matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                
                q.push(matrix[i][j]);
            }
            
        }
        
          for(int i=0; i< matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                
                int temp = q.front();
                            q.pop();
                
                result[j][i] = temp;
                
            }
              
          }
        
        return result;
    }
};