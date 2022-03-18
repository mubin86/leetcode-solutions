class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        string str = words[0];
        vector<string>result;
        
        for(int i=0; i< words[0].length(); i++){
            
            char c = str[i];
            
            bool flag = true;
            
            for(int j=1; j< words.size(); j++){
                string s = words[j];
                
                auto it = s.find(c);
                
                if(it != string::npos){
                    
                    s.erase(s.begin() + it);
                    words[j] = s;
                    
                }else{
                    flag = false;
                    break;
                }
                
                
            }
            
            if(flag){
                string s;
                s = c;
                result.push_back(s);
            }
            
            
        }
        
        return result;
    }
};