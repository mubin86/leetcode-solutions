class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        
        for(int i=0; i<words.size(); i++){
            string str = words[i];
            bool flag = true;
            
            for(int j=0; j<str.length(); j++){
                if(allowed.find(str[j]) == string::npos){
                    flag = false;
                    break;
                }
            }
          
            if(flag){
                count += 1;
            }
            
        }
     
      return count;
    }
};