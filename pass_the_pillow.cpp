class Solution {
public:
    int passThePillow(int n, int time) {
        if(time < n){
            return time+1;
        }
        int count = 1;
        bool reverse = false;

        for(int i=1; i<=time; i++){
            if(!reverse){
                count++;
            }else{
                count--;
            }
            
            if(count == n){
                reverse = true;
            }
            if(count == 1){
                reverse = false;
            }
        }

        return count;
    }
};