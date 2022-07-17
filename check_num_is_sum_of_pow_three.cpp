class Solution {
public:
    bool checkPowersOfThree(int n) {
        int number = 1;
        priority_queue<int>pq;
        
        while(1){
            
            if(number>n){
                break;
            }
            else{
                pq.push(number);
            }
            
            number*=3;
        }
        
        while(n>0 and !pq.empty()){
            
            if(n >= pq.top()){
                
                n -= pq.top();
            }
            
            pq.pop();
        }
        
        return n==0;
    }
};