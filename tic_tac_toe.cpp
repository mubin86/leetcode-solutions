class Solution {
public:
    bool calculate(int a, int b, int c){
             return (a==1 && b==1 && c==1) || (a==2 && b==2 && c==2);
            
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> grid(3, vector<int> (3, 0));
        
        for(int i=0; i<moves.size(); i++){
            
            if(i%2 == 0){
                grid[moves[i][0]][moves[i][1]] = 1;
            }else{
                grid[moves[i][0]][moves[i][1]] = 2;
            }
        }
        
        int count = 0;
        
        for(int i=0; i<grid.size(); i++){
      
            for(int j = 0; j<grid[i].size(); j++){ 
                    
                if(i == 0){
                        
                        if(j == 0){
                           if(calculate(grid[0][0], grid[0][1], grid[0][2]) 
                              ||  calculate(grid[0][0], grid[1][1], grid[2][2]) 
                              || calculate(grid[0][0], grid[1][0], grid[2][0])
                            ){
                               return grid[0][0] == 1 ? "A" : "B";
                           }


                        }else if( j == 1){
                            if( calculate(grid[0][1], grid[1][1], grid[2][1]) ){
                                return grid[0][1] == 1 ? "A" : "B";
                            }

                        }
                        else {
                            if(calculate(grid[0][2], grid[1][2], grid[2][2]) ||
                                calculate(grid[0][2], grid[1][1], grid[2][0]) ){
                                return grid[0][2] == 1 ? "A" : "B";
                            }
                        }

                    } else if(i == 1){
                        
                        if(j == 0){
                            if(calculate(grid[1][0], grid[1][1], grid[1][2])){
                                return grid[1][0] == 1 ? "A" : "B";
                            }
                        }else {
                            break;
                        }  

                    } else if(i==2){
                    
                        if(j == 0){
                            if(calculate(grid[2][0], grid[2][1], grid[2][2])){
                                return  grid[2][0] == 1 ? "A" : "B";

                            } else{
                                break;
                            }

                        }
                    }     
                }
            
        }
        
        for(int i=0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){          
                if(grid[i][j] == 1 || grid[i][j] == 2){
                    count += 1;
                }   
            }
        }
        
        if(count == 9){
            return "Draw";
        }
        
        return "Pending";
        
    }
};