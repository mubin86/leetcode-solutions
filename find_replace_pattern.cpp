class Solution {
public:
    
    bool check(unordered_map<char, int> &m, unordered_map<char, int> &wm, string temp, string pattern){
        if(m.size() != wm.size()){
            return false;
            
        }else{         
            for(int i=0; i < pattern.length(); i++){
                
                int val1 = m[pattern[i]];
                int val2 = wm[temp[i]];
                
                if(val1 != val2){
                    return false;
                }
            }
        }
        
        return true;
    
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>ans;   
        unordered_map<char, int> m;
        unordered_map<char, int> wm;
        
        for(int i=0; i< pattern.length(); i++){  
            m[pattern[i]]++;
        }
        
        for(int i=0; i< words.size(); i++){         
            string temp = words[i];
            bool checkFlag = true;
            
            for(int j = 0; j < words[i].length(); j++){
                
                bool p = pattern[j] == pattern[j+1];
                bool tempString = temp[j] == temp[j+1];
                
                if(p != tempString){
                    checkFlag = false;
                    break;
                }
                
               wm[temp[j]]++;                             
            }
            
            if(checkFlag){
                if(check(m, wm, temp, pattern)){
                     ans.push_back(temp);
                }
            }
               
            wm.clear();
            
        }
        
        return ans;
    }
};