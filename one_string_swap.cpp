class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2){
            return true;
        }
        
        int count = 0;
        int m = -1;
        int n = -1;
        
        for(int i=0; i<s1.length(); i++){
            
            if(s1[i] != s2[i]){
                count++;
                if(count > 2){
                    return false;
                }
                if(count == 1){
                    m = i;
                }else if(count == 2){
                    n = i;
                }
            }
        }
        
        if(count < 2){
            return false;
        }
        
        swap(s1[m], s1[n]);
        return s1== s2;
    }
};