class Solution {
public:
    string minRemoveToMakeValid(string s) {

        stack<char>st;
        
        string result = "";
        
        for(int i=0; i < s.length(); i++){
            if(isalpha(s[i])){
                result += s[i];
            }else {
                
                if(s[i] == '('){
                    st.push(s[i]);
                    result += s[i];
                    
                }else if(s[i] == ')') {
                    
                    if(!st.empty()){
                        st.pop();
                        result += s[i];
                    }else{
                        continue;
                    }
                  
                }
            }   
        }
      
        
        int i = result.size() - 1;
        
        while( !st.empty() ){
            
            if(result[i] == st.top()){
                st.pop();
               result.erase(i, 1);
            }
            
            i--;
        }
        
        return result;
        
    }
};