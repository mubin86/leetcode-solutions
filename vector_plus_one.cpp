class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        stack<int>st;
        int temp;
        bool flag = false;
        vector<int>result;       
        for(int i = digits.size() - 1; i>=0 ; i--){
            temp = digits[i];
            if(i == digits.size() - 1){
                temp = digits[i] + 1;
            }
            if(flag == true){
                    temp = digits[i] + 1;
            } 
            if(temp >= 10){
                st.push(0);
                flag = true;
            }else{
                st.push(temp);
                flag = false;
            }
        }       
        if(flag == true){
            result.push_back(1);
        }
        while(!st.empty()){
            int a = st.top();
                    st.pop();
            result.push_back(a);
        }
        
        return result;
    }
};