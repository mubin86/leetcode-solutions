class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        queue<int>q;
        int temp1=0, temp2=0, temp3 = 0, temp4=0, temp5=0, temp6=0, temp7=0, temp8=0;
        for(int i= 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                    int sum = 0;
                
                    if(j+1 < board[i].size()){
                         temp1 = board[i][j+1];
                        sum+=temp1;
                    }
                    if((j-1) >= 0){
                         temp2 = board[i][j-1];
                        sum+=temp2;
                    }
                  
                   
                    if((i+1) < board.size()){
                        temp3 = board[i+1][j]; 
                        sum+=temp3;
                    }
                    if((i-1) >= 0){
                        temp4 = board[i-1][j];
                        sum+=temp4;
                    }
                    
                    
                    if((i+1) < board.size() && (j+1) < board[i].size()){
                        temp5 = board[i+1][j+1];
                        sum+=temp5;
                    }
                    if((i-1) >= 0 && (j-1) >= 0){
                        temp6 = board[i-1][j-1];
                        sum+=temp6;
                    }
                    
                    
                    if((i+1) < board.size() && (j-1) >= 0){
                        temp7 = board[i+1][j-1];
                        sum+=temp7;
                    }
                    if((i-1) >= 0 && (j+1) < board[i].size()){
                         temp8 = board[i-1][j+1];
                        sum+=temp8;
                    }
                
                // int sum = temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8;
                
                if(board[i][j] == 0){                    
                    if(sum == 3){
                        q.push(1);
                    }else{
                        q.push(0);
                    }
                }else{
                    
                    if(sum < 2){
                        q.push(0);
                    }          
                    else if(sum==2 || sum==3){
                         q.push(1);
                    }         
                    else{
                        q.push(0);
                    }
                         
                }
                
                
            }
        }
        
         for(int i= 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                board[i][j] = q.front();
                                q.pop();
            
            }
         }
    }
};