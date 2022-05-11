class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        
        for(int i=0; i<s.length(); i++){
            
            if(!st.empty()){
                char ch = st.top();  
                if(toupper(s[i]) == toupper(ch)){
                    if(isupper(s[i]) && islower(ch)){
                            st.pop();
                    }else if(islower(s[i]) && isupper(ch)){
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
     
        string ans="";
        
        while(!st.empty()){
            char ch = st.top();
                        st.pop();
            ans.insert(ans.begin(), ch);
        }
        
        return ans;
    }
};