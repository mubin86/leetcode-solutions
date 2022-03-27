class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string divisorStr = "";
        string targetString = "";
        if(str1.length() > str2.length()){
            divisorStr = str2;
            targetString = str1;
        }else{
            divisorStr = str1;
            targetString = str2;
        }
        
        string res = "";
        
        string temp = divisorStr;
        
        for(int i = divisorStr.length()-1; i>= 0; i--){
            res = temp;
            
            while(temp.length() < targetString.length()){
                temp = temp + res;
            }
            
            if(temp == targetString){
                string checkDivisor = res;
                while( checkDivisor.length() < divisorStr.length()){
                    checkDivisor += res;
                }
                if(checkDivisor==divisorStr){
                     return res;
                }
               
            }
            
            temp = res;
            temp.pop_back();
        }
        
        return "";
    }
};