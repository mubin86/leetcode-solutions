class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        vector<int>temp;
       
        int x[31][31] = {0};
        
        for(int i = 0; i<numRows; i++){
            for(int j = 0; j<=i; j++){
                if(j > 0 && j < i){
                    x[i][j] = x[i-1][j-1] + x[i-1][j];
                    temp.push_back(x[i][j]);
                }else{
                    x[i][j] = 1; 
                     temp.push_back(1);
                }

            }
           
            result.push_back(temp);
             temp.clear();
        }
        
        return result;
    }
};