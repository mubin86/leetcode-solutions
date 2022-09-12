class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() < 3){
            return 0;    
        }
        int count = 0;
    
        for(int i=0; i<=s.size()-3; i++){
            
            char a = s[i];
            char b = s[i+1];
            char c= s[i+2];
            
            if(a!=b && b!=c && a!=c){
                count++;
            }
            
        }
        
        return count;
    }
};