class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,vector<long long>>m1,m2;
        for(int i=0;i<n;i++){
            m1[arr[i]].push_back(i);
            m2[arr[i]].push_back(i);
        }
        for(auto it = m1.begin();it!=m1.end();it++) {
            for(int j=1;j<(it->second).size();j++){
                m1[it->first][j] += m1[it->first][j-1]; 
            }
        }
        vector<long long>ans(n); 
        for(auto it=m1.begin();it!=m1.end();it++){
            int num = it->first;
            vector<long long>v=it->second;
            for(int i=0;i<v.size();i++){
                 int index = m2[num][i];
                 ans[index] = (long long)index*(i+1)-v[i] + (v[v.size()-1]-v[i])-index*(v.size()-i-1);
            }

        }
        return ans;
        }
    };
