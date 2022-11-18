class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;
        
        while(target > 1){
            if(maxDoubles==0){
                return count+target-1;
            }
            
            if(target % 2 != 0){
                target -= 1;
                count++;
            }else{
                target = target >> 1;
                count++;
                maxDoubles--;
            }
        }
        
        return count;
    }
};