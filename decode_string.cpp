class Solution {
public:
    string decodeString(string s) {      
        stack<char>st;

        for(int i=0; i<s.size(); i++){
           if(s[i] != ']'){
               st.push(s[i]);
            }else if(s[i] == ']'){
                string substr = "";
                while(!st.empty()){
                    char c = st.top();
                             st.pop();
                    if(c != '['){
                        substr.insert(substr.begin(), c);
                    }else{
                        break;
                    }
                }

                string digit = "";
                while(!st.empty()){
                    char c = st.top();
                    if(isdigit(c)){
                        digit.insert(digit.begin(), c);
                        st.pop();
                    }else{
                        break;
                    }
                } 
                int lastDigit = 0;
                if(digit.size() > 0){
                    lastDigit = stoi(digit);
                }
                for(int j=0; j<lastDigit; j++){
                    for(int k=0; k<substr.size(); k++){
                        st.push(substr[k]);
                    }
                }   
            }

        }

        string result = "";
        while(!st.empty()){
            char c = st.top();
                     st.pop();
            result.insert(result.begin(), c);
        }

        return result;
    }
};