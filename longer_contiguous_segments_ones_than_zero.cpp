class Solution {
public:
    bool checkZeroOnes(string s) {
        int result0 = INT_MIN;
        int result1 = INT_MIN;
        int len0 = 0;
        int len1 = 0;
            
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                len0 = 0; 
                len1++;
                result1 = max(len1, result1);
            }else{
                len1 = 0;
                len0++;
                result0 = max(len0, result0);
            }
        
        }
        
        return result1 > result0;
    }
};