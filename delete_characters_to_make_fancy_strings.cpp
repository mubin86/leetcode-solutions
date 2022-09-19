class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        char prev = s[0];
        result += prev;
        int count = 1;
        
        for(int i=1; i < s.size(); i++){
            if(s[i] == prev){
                count++;
                
                if(count < 3){
                    result.push_back(s[i]);
                }
            }else{
                prev = s[i];
                count = 1;
                result.push_back(s[i]);
            }
            
        }
        
        return result;
    }
};