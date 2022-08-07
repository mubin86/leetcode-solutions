class Solution {
public:
    int minOperations(string s) {
        
        int count1 = 0;
        char prev = s[0];
        string temp = s;
        
        for(int i=1; i<s.length(); i++){
           if(prev == s[i]){
                count1++;
                if(s[i] == '0'){
                    s[i] = '1';
                }else{
                    s[i] = '0';
                } 
            }
               prev = s[i];
           
        }
        
        
        int count2 = 1;
        prev = s[0] == '0' ? '1' : '0';
        for(int i=1; i<temp.length(); i++){
           if(prev == temp[i]){
                count2++;
                if(temp[i] == '0'){
                    temp[i] = '1';
                }else{
                    temp[i] = '0';
                } 
            }
               prev = temp[i];
         }
        
        return min(count1, count2);
    }
};