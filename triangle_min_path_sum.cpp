class Solution {
public:
    int findMin(int i, int j, int n, vector<vector<int>> &triangle, vector<vector<int>> &mem){
        if(i==n-1){
           return triangle[i][j]; 
        }
        
        if(mem[i][j] != -1){
            return mem[i][j];
        }
            
        int left = triangle[i][j] + findMin(i+1, j, n, triangle, mem);
        
        int right = triangle[i][j] + findMin(i+1, j+1, n, triangle, mem);
        
        return mem[i][j] = min(left, right);    
    }
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> mem(triangle.size(), vector<int>(triangle.size(), -1));
        
        return findMin(0, 0, triangle.size(), triangle, mem);
    }
};