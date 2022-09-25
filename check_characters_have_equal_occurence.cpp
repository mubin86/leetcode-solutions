class Solution {
public:
    bool areOccurrencesEqual(string s) { 
        unordered_map<char, int>m;

        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        
        auto it = m.begin();
        int prev = it->second;
        it++;
        
        for(; it!=m.end(); it++){
            if(it->second != prev){
                return false;
            }    
            
            prev = it->second;
        }
        
        return true;
    }
};