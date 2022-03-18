class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        
        for(int i=0; i < stones.size(); i++){
            
            pq.push(stones[i]);
            
        }
        
        while(pq.size() != 1 && pq.size() > 0){
            
            int x = pq.top();
                    pq.pop();
            
            int y = pq.top();
                    pq.pop();
            
            if(x == y){
                continue;
            }
            
            if(x > y){
                int temp = x- y;
                pq.push(temp);
            }
            
        }
          
        if(pq.empty()){
            return 0;
        }
        
        return pq.top();
        
        
    }
    
};