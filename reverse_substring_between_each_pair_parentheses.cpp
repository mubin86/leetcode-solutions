class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string tempStr = "";
        string result = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                if(tempStr.size() > 0){
                    st.push(tempStr);
                    tempStr = "";
                }
                st.push("(");
            }else if(isalpha(s[i])){
                tempStr += s[i];
            }else{
                if(tempStr.size() > 0){
                    st.push(tempStr);
                    tempStr = "";
                }
                string str = "";
                while(st.size() > 0){
                    string subStr = st.top();
                                    st.pop();
                    if(subStr == "("){
                        if(str.size() > 0){
                            reverse(str.begin(), str.end());
                            st.push(str);
                        }
                        break;
                    }
                    str.insert(0, subStr);
                }
            }
        }

        if(tempStr.size() > 0){
            st.push(tempStr);
        }
        while(st.size() > 0){
            string temp = st.top();
                          st.pop();
            result.insert(0, temp);
        }

        return result;
    }
};