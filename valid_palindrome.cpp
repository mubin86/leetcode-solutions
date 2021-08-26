class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i =0; i<s.length(); i++){
            if(iswalnum(s[i])){
                temp += tolower(s[i]);
            }
        }
        int n = temp.length();
       for(int i = 0; i< n/2 ; i++){
           if(temp[i] != temp[n-1-i]){
               return false;
           }
       }
        return true;
    }
};