class Solution {
public:
   struct cmp {
        bool operator()(pair<int, string> x, pair<int, string> y) {
            if (x.first == y.first) {
                return x.second > y.second;
            } else {
                return x.first < y.first;
            }
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>m;
        priority_queue<pair<int, string>, vector<pair<int,string>>, cmp> pq;
        vector<string>result;

        for(int i=0; i<words.size(); i++){
            m[words[i]]++;
        }
        for(auto it = m.begin(); it!= m.end(); it++){
            pq.push(make_pair(it->second, it->first));
        }
        int i = 0;
        while(i < k){
            pair<int, string> temp = pq.top();
                                     pq.pop();
            
            result.push_back(temp.second);
            i++;
        }

        return result;
    }
};