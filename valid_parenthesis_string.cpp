class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st;
        stack<int>temp;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }else if (s[i] == ')'){
                if(!st.empty()){
                    st.pop();
                }else if(!temp.empty()){
                    temp.pop();
                }else{
                    return false;
                }
            }else{
                temp.push(i);
            }
        }

       while(!st.empty() && !temp.empty() && st.top() < temp.top()){
            st.pop();
            temp.pop();
        }

        return st.empty();
    }
};