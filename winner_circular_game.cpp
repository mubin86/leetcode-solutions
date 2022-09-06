class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        
        for(int i=1; i<=n; i++){
            q.push(i);
        }
        
        int i = 0;
        while(q.size() != 1){
            i++;
            int val = q.front();
                        q.pop();  
            
            if(i == k){
                i=0;   
            }else{
                q.push(val);
            }
        }
        
        return q.front();
   
    }
};