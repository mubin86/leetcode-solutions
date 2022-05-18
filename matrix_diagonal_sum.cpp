class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        
        for(int i=0; i<mat.size(); i++){
                sum += mat[i][i];
        }
        
        int size = mat.size()-1;
        for(int i= 0; i<mat.size(); i++){   
            sum += mat[i][size];
            size--;
        }
        
        if(mat.size()%2 != 0){
            int temp = mat.size()/2;
            sum -= mat[temp][temp];
            
        }
        
        return sum;
    }
};