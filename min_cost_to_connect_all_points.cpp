class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

        for(int i=1;i<points.size();i++)
        {
            int dis = abs(points[i][0]-points[0][0]) + abs(points[i][1]-points[0][1]);
            pq.push(make_pair(dis,make_pair(0,i)));
        }

        int n = points.size();

        vector<bool> vis(n,false);

        vis[0]=true;

        int tot_cost=0;

        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();

            int from= it.second.first;
            int to  = it.second.second;
            int cost = it.first;
            
            if(vis[to])
            {
                continue;
            }

            tot_cost += cost;
            vis[to]=true;

            for(int i=0;i<vis.size();i++)
            {
                if(!vis[i])
                {
                   int dis =abs(points[i][0]-points[to][0]) + abs(points[i][1]-points[to][1]);
                   pq.push({dis,{to,i}});
                }
            }
            
        }

        return tot_cost;
        
    }
};