class Solution {
public:
    bool check(int i, int j, vector<vector<int>>& mat){
        bool flag = true;
        
        for(int k=0; k<mat[i].size(); k++){
            if(k != j){
                if(mat[i][k] == 1){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        
        if(flag){
            for(int k=0; k<mat.size(); k++){
                if(k != i){
                    if(mat[k][j] == 1){
                        flag = false;
                        break;
                    }
                }    
            }
        }
        
        return flag;
    }
    
    
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        
        for(int i=0; i<mat.size(); i++){
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    if(check(i, j, mat)){
                        count += 1;
                    }        
                }  
            }
        }
        
        return count;
    }
};