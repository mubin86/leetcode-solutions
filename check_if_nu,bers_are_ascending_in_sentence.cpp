class Solution {
public:
    bool areNumbersAscending(string s) {
        int prevNum = INT_MIN;
        string str = "";
        bool flag = false;
        
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                str.push_back(s[i]);
                flag = true;
                
            }else{
                if(flag){
                    stringstream geek(str);
                    int num = 0;
                    geek >> num;
                    if(num <= prevNum){
                        return false;
                    }else{
                        prevNum = num;
                    }
                    str = "";
                    flag = false;
                }
            }
        }
        
        if(str.size() > 0){
            stringstream geek(str);
            int num = 0;
            geek >> num;
            if(num <= prevNum){
                return false;
            }
        }
        
        return true;
    }
};