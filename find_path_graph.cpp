class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> adj(n);
        
        for(int i = 0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> vis(n , 0);
        queue<int> q;
        
        q.push(source);
        vis[source] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop(); 
            
            for(int i=0; i<adj[node].size(); i++){ 
                int it = adj[node][i];
                
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        
        
        return vis[destination];
    }
};