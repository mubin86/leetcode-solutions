class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string>s;
        bool flag = false;
      
        string substr = "";
        bool onlyZeroes = false;
        
        for(int i=0; i<word.size(); i++){
            if(isdigit(word[i])){
                if(substr.length() == 0 && word[i] == '0'){
                   onlyZeroes = true;
                   continue;
                }else{
                    onlyZeroes = false;
                    substr += word[i]; 
                }
            }else if(isalpha(word[i])){
                if(substr.length() > 0){
                   s.insert(substr); 
                }else if(onlyZeroes){
                    string temp = "0";
                    s.insert(temp);
                }
                substr = "";
            }
        }
        
        if(substr.length() > 0){
            s.insert(substr);
        }else if(onlyZeroes){
            string temp = "0";
            s.insert(temp);
        }
        
        return s.size();
    }
};