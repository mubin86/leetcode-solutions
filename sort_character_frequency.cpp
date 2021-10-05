class Solution {
public:
    string frequencySort(string s) {
        priority_queue< pair<int, char> >pq;
        unordered_map<char, int>m;
        string str="";
    
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        
        unordered_map<char, int>:: iterator it;
        
        for(it = m.begin(); it != m.end(); it++){
            pq.push(make_pair(it->second, it->first));
        }
        
        while(!pq.empty()){
            pair<int, int> top = pq.top();
                                pq.pop();
            str.insert(str.length(), top.first, top.second);
        }
        
        return str;
    }
};