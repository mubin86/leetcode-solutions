class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue<pair<int, pair<int,int>>> pq;
        
        for(int i=0; i<costs.size(); i++){
            pair<int,pair<int,int>> p;
            p.first = costs[i][1] - costs[i][0];
            p.second.first = costs[i][0];
            p.second.second = costs[i][1];
            pq.push(p);
        }

        int minCost = 0;

        while(pq.size() > costs.size()/2){
            minCost += pq.top().second.first;
            pq.pop();
        }

        while(!pq.empty()){
            minCost += pq.top().second.second;
            pq.pop();
        }

        return minCost;
    }
};