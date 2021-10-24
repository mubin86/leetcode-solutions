class Solution {
public:
    string reverseWords(string s) {
        
        vector<string>temp;
        string str;
        string result;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                temp.push_back(str);
                str.clear();
            }else{
                 str += s[i];
            }
        }
        
        temp.push_back(str);
        
        for(int i =0; i<temp.size(); i++){
            string s = temp[i];
            
            reverse(s.begin(), s.end());
  
            result += s;
            if(i != temp.size()-1){
                result += ' ';
            }
            
        }
        
        return result;
    }
};