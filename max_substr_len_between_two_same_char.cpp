class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int result = -1;
        
        for(int i=0; i<s.length(); i++){
            for(int j=i+1; j<s.length(); j++){
                
                if(s[i] == s[j]){
                    result = max(result, (j-i)-1);
                }
            }
        }
        
        return result;
    }
};