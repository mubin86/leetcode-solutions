class Solution {
public:
    int minSteps(string s, string t) {   
        unordered_map<char, int>us;
        unordered_map<char, int>ut;
        int count = 0;
        
        for(int i=0; i<s.size(); i++){
            us[s[i]]++;
        }
        
        for(int i=0; i<t.size(); i++){
            ut[t[i]]++;
        }
        
        for(int i=0; i<s.size(); i++){
            auto it = ut.find(s[i]);
            
            if(it == ut.end()){
                count++;
            }else{
                if(it->second - 1 == 0){
                    ut.erase(it);
                }else{
                   it->second--; 
                }   
            } 
        }
        
        for(int i=0; i<t.size(); i++){
            auto it = us.find(t[i]);
            
            if(it == us.end()){
                count++;
            }else{
                if(it->second - 1 == 0){
                    us.erase(it);
                }else{
                   it->second--; 
                }
            }
        }
        
        return count;
        
    }
};