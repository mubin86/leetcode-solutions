class Solution {
public:
    vector<vector<int>>result;
    void pathTraverse(vector<int> adj[], int currentNode, int targetNode, vector<int>currentPath, vector<int>visited){
        if(currentNode == targetNode){
            currentPath.push_back(currentNode);
            result.push_back(currentPath);
            return;
        }

        currentPath.push_back(currentNode);
        visited[currentNode] = 1;

        for(int i=0; i<adj[currentNode].size(); i++){
            int v = adj[currentNode][i];
            if(visited[v] == 0){
                pathTraverse(adj, v, targetNode, currentPath, visited);
            } 
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];
        vector<int>currentPath;
        vector<int>visited(n, 0);

        for(int i=0; i<graph.size(); i++){
            for(int j=0; j<graph[i].size(); j++){
                adj[i].push_back(graph[i][j]);
            }
        }

        pathTraverse(adj, 0, graph.size()-1, currentPath, visited);

        return result;
    }
};