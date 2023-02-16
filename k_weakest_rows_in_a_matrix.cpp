class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        unordered_map<int, int>m;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;

        for(int i=0; i<mat.size(); i++){
            int countOne = 0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    countOne++;
                }
            }
            m.insert(make_pair(i, countOne));
        }

        for(auto it = m.begin(); it!=m.end(); it++){
            pq.push(make_pair(it->second, it->first));
        }

        while(k != 0){
            pair<int, int> p = pq.top();
                                pq.pop();
            ans.push_back(p.second);
            k--;
        }

        return ans;
    }
};