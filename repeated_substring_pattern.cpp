class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=0; i<s.length()/2; i++){    
            string str = s.substr(0, i+1);
            int len = str.length();
            bool flag = true;
    
            for(int j = len; j< s.length(); j=j+len){
                string temp = s.substr(j, len);
                if(str != temp){
                    flag = false;
                    break;
                }
            }
            
            if(flag){
                return true;
            }       
        }
        
        return false;
    }
};