class Solution {
public:
    int minimumMoves(string s) {
        int move = 0;
        int count = 0;
        bool flag = false;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'X'){
                if(!flag){
                    move++;
                    flag = true;
                }   
            }
            
            if(flag){
                count++;
            }

            if(count == 3){
                flag = false;
                count = 0;
            }
        }
        
        return move;
    }
};