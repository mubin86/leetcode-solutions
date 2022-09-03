class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>>pq;        
        priority_queue<int>result;
        int prev;
        
        for(int i=0; i<arr.size(); i++){
            pq.push(arr[i]);
        }
        
        
        int val = pq.top();
                  pq.pop();
      
        if(val != 1){
            val = 1;
        }
            
        result.push(val);
        prev = val;
        
        while(!pq.empty()){
            val = pq.top();
                  pq.pop();
            
            if(abs(val - prev) > 1){
                val = prev+1;
            }
            
            result.push(val);
            prev = val;
            
        }
    
        return result.top();
    }
};