class Solution {
public:
    bool rotateString(string s, string goal) {
     
        for(int i =0; i < s.length(); i++){
            
            char temp = s[0];
            
            s.erase(0,1);
            
            s += temp;

            
            if(s == goal){
                return true;
            }
            
            
        }
        
        return false;
    }
};