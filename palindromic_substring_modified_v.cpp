class Solution {
public:
    
    bool isPalindrome(string str){     
        int len = str.length();
        
        for(int i=0 ; i<len/2; i++){
            if(str[i] != str[str.length()-i-1]){
                return false;
            }
        }
        
        return true;
    }
    
    
    int countSubstrings(string s) {
        int result = 0;
        
        for(int i = 0; i<s.length(); i++){ 
             for(int j =1; j<= s.length()-i; j++){
                string temp = s.substr(i, j);
          
                if(isPalindrome(temp)){
                    result += 1;
                }
            }
        }
        
        return result;
       
    }
};