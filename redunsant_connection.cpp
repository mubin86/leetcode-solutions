class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size(), currentNode;
        vector<int> res;

        for(int i=n-1; i>=0; i--) {
            res=edges[i];
            edges.erase(edges.begin() + i);
            vector<vector<int>> graph(n+1, vector<int>());
            for(int i=0; i<edges.size(); i++) {
                graph[edges[i][0]].push_back(edges[i][1]);
                graph[edges[i][1]].push_back(edges[i][0]);
            }

            queue<int> q;
            vector<int> visited(n+1, false);
            int noOfNodes=1;
            q.push(1); 
            visited[1]=true;

            while(q.size() > 0) {
                currentNode = q.front();
                for(int i=0; i<graph[currentNode].size(); i++) {
                    int adj = graph[currentNode][i];
                    if(!visited[adj]) {
                        visited[adj]=true;
                        q.push(adj);
                        noOfNodes++;
                    }
                }
                q.pop();
            }

            if(noOfNodes == n){
                return res;
            }
                
            edges.insert(edges.begin() + i, res);
        }

        return {};
    }
};