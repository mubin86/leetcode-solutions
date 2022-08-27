class Solution {
public:
   bool iscycle(vector<int> adj[],vector<int> &vis,int id){
        if(vis[id]==1){
            return true;
        }
      
        if(vis[id]==0){
            vis[id]=1;
            for(auto edge : adj[id]){
                if(iscycle(adj,vis,edge)){
                    return true;
                }
            }
        }
            
        vis[id] = 2; //when returing to the parent calling function indicating that for this node there is no                            adjacent or all the child is already processed
        return false; 
    }
    
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        for(auto edge : pre){
           adj[edge[0]].push_back(edge[1]);
        }
            
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(iscycle(adj, vis, i)){
                   return false;
                }
            }   
        }
        
        return true;
    }
};