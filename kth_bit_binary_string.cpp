class Solution {
public:
    string invert(string s){
        string temp = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                temp.push_back('1');
            }else{
               temp.push_back('0'); 
            }
        }
        
        return temp;
    }
    
    char findKthBit(int n, int k) {
        string s = "0";
        string temp = "";
        
        for(int i=2; i<=n; i++){
            string str = invert(s);
            reverse(str.begin(), str.end());
            s.push_back('1');
            s += str;
        }
        
        return s[k-1];
    }
};