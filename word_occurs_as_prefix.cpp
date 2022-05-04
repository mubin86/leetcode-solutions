class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        vector<string>allString;
        string temp = "";
        
        for(int i=0; i<sentence.length(); i++){
            
            if(sentence[i] != ' '){
                temp.push_back(sentence[i]);
            }else{
                allString.push_back(temp);
                temp = "";
            }
        }
        
         allString.push_back(temp);
        
        for(int i=0; i<allString.size(); i++){
            if(allString[i].rfind(searchWord, 0) == 0){
                return i+1;
            }
        }
        
        return -1;
    }
};