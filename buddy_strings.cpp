class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.length() != goal.length()){
            return false;
        }
        
        if(s == goal){
            unordered_map<char, int>mp;
            
            for(int i = 0; i< s.length(); i++){
                mp[s[i]]++;
            }
            
             unordered_map<char, int>:: iterator it;
            
            for(auto it = mp.begin(); it != mp.end(); it++){
                if(it->second > 1){
                    return true;
                }
            }
            
            return false;
            
        }
        
        int count = 0;
        string s1 = s;
        string g1 = goal;
        bool flag = false;
        
        bool check = true;
        
        for(int i=0; i< s.length(); i++){
            
            if(s[i] != goal[i]){
                flag = true;
                if(count == 0){
                    s1.clear();
                    g1.clear();
                }
                s1.push_back(s[i]);
                g1.push_back(goal[i]);
                
                count++;
                if(count > 2){
                    return false;
                }
            }
            
        }
        
        if(flag){
            if(count != 2){
                return false;
            }
        }
        
        swap(s1[0], s1[1]);
        
        if(s1 == g1){
            return true;
        }
        
        return false;
    }
};