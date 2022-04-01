class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>m;
        unordered_set<int>s;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        
        unordered_map<int, int>::iterator it;
        
        for(it = m.begin(); it!= m.end(); it++){
            
            s.insert(it->second);
        }
        
        return m.size() == s.size();
        
    }
};