class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                int ch = stoi(tokens[i]);
                st.push(ch);
            }else{
                int n1 = st.top();
                          st.pop();

                int n2 = st.top();
                         st.pop();

                int currentResult;
                if(tokens[i] == "+"){
                    currentResult = n1+n2;
                }else if(tokens[i] == "-"){
                    currentResult = n2-n1;
                }else if(tokens[i] == "*"){
                     currentResult = n1*n2;
                }else{
                     currentResult = n2/n1;
                }
                st.push(currentResult);
            }
        }
        
        return st.top();
    }
};