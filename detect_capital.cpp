class Solution {
public:
    bool detectCapitalUse(string word) {
        // bool flag1 = false;
        // bool flag2 = false;
        // bool flag3 = false;
        
        int count1=0;
        int count2=0;
        
        for(int i = 0; i<word.length(); i++){
            if(isupper(word[i])){
                count1++;
            }else{
                count2++;
            }
        }
        
        if(count2== word.length() && count1==0){
            return true;
        }
        
        if(word[0] >='A' && word[0] <= 'Z'){
            if(count2 == 0 && count1 == word.length()){
                return true;
            }
            if(count1 == 1 && count2 == word.length()-1){
                return true;
            }
        }
        
        return false;
    }
};