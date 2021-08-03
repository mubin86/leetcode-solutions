class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        queue<int>q;
        int temp;
        for (int i = 0; i < matrix.size(); i++)
        {   
            for (int j = 0; j < matrix[i].size(); j++)
            {
                q.push(matrix[i][j]);
            }   
        }
        
        for (int i = matrix.size()-1; i >= 0; i--)
        {   
            for (int j = 0; j < matrix[i].size(); j++)
            {
                temp = q.front();
                        q.pop();
                matrix[j][i] = temp;
                
            }   
        }
        
    }
};