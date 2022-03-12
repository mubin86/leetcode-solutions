class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char>st;
        
        for(int i=0; i< s.length(); i++){
            
            if(s[i] == ')'){
                
                if(!st.empty()){
                   
                    char ch = st.top();
                    if(ch== '('){
                        st.pop();
                    }else{
                        st.push(s[i]);
                    }
                    
                }else{
                    st.push(s[i]);
                }
                
            }else{
                
                st.push(s[i]);
            }
        }
        
        return st.size();
    }
};