class Solution {
public:
    
    bool isPalindrome(string str){     
        int len = str.length();
        
        for(int i=0 ; i<len; i++){
            if(str[i] != str[len-i-1]){
                return false;
            }
        }    
        
        return true;
    }
    
    
    int countSubstrings(string s) {
        int result = s.length();
        
        for(int i = 0; i<s.length()-1; i++){
            
             for(int j =2; j<= s.length()-i; j++){
                string temp = s.substr(i, j);

                if(isPalindrome(temp)){
                    result += 1;
                }
            }
        }
        
        return result;
       
    }
};