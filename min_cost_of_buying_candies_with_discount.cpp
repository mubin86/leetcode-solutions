class Solution {
public:
    int minimumCost(vector<int>& cost) {
       priority_queue<int>pq;
       int result = 0;

       for(int i=0; i<cost.size(); i++){
           pq.push(cost[i]);
       }

       int count = 0;
       while (pq.size() > 0){
           count++;
           if(count == 3){
               pq.pop();
               count = 0;
               continue;
           }
           result += pq.top();
                     pq.pop();
       }

       return result;
    }
};