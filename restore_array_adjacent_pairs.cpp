class Solution{
public:
    vector<int> ans;
    unordered_map<int, vector <int>> graph;
    
    void dfs(int u, unordered_map<int,bool>&visited ){
        ans.push_back(u);
        visited[u]=true;
        
        for (auto &v: graph[u]){
            if (!visited[v]){
                dfs(v, visited);
            }      
        }    
    }
    
    vector<int> restoreArray(vector<vector < int>> &edges){
        unordered_map<int, bool>visited;
        
        for (auto &e: edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        
        for (auto &p: graph){
            if (p.second.size() == 1){
               	// this might be the start or the end
                dfs(p.first, visited);
                break;
            }
        }
        return ans;
    }
};