class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        unordered_map<char, int>m2;
        unordered_map<char, char>m3;

        for(int i=0; i<s.length(); i++){
            if(m3.find(s[i]) == m3.end()){
                if(m2.find(t[i]) != m2.end()){
                    return false;
                }
                m3.insert({s[i], t[i]});
                m2.insert({t[i], 0});
            
            }else{
                if(t[i] != m3[s[i]]){
                    return false;
                }
            }            
        }
        
        return true;
    }
};