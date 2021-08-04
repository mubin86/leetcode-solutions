class Solution {
public:
    bool isValid(string s) {
         stack<char>st;
        char c;
        
        for(auto i = 0; i< s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            
            // c = st.top();
            //     st.pop();
            // if((s[i] == ')' && c != '(') || 
            //     (s[i] == '}' && c != '{') ||
            //    (s[i] == ']' && c != '[')
            //   )
            // {
            //     return false;
            //     break;
            // }
            
            //swith case remove that run time issue
            // && operatpr cause that run time
            
        switch(s[i]){
            case ']':   
                if(st.empty()) return false;
                if(st.top()!='[') return false;
                st.pop();
                break;
            case '}':
                if(st.empty()) return false;
                if(st.top()!='{') return false;
                st.pop();
                break;
            case ')':
                if(st.empty()) return false;
                if(st.top()!='(') return false;
                st.pop();
                break;
            default:
                break;   
        }
        }
        
        if(st.empty()){
            return true;
        }
        return false;
        
    }
};