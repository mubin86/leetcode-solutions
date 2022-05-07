class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string s = "11";
        
        for(int i=3; i<=n; i++){
            s= s+'&';
            int count = 1;
            string temp = "";
            
            for(int j=1; j<s.length(); j++){
                if(s[j] == s[j-1]){
                    count++;
                }else{
                    temp = temp + to_string(count);
                    temp = temp + s[j-1];
                    count = 1;
                }
            }
            
            s = temp;
        }
        
        return s;
    }
};