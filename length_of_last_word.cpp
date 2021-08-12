class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, count = 0;
        bool flag = false;
        for(i = s.length() - 1; i>=0; i--){
            if(s[i] == ' ' && flag == true){
                break;
            }   
            if(s[i] == ' '){
                continue;
            }
            if(s[i] != ' '){
                flag = true;
            }
            count++;
        }
        return count;
    }
};