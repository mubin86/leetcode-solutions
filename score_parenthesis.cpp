class Solution {
public:
    int scoreOfParentheses(string s) {
        s="(()(()) ())";
            
       	int sum = 0;
        
        if (s == ""){
            return sum;
        }
	
	// deepest ( counts
        int layer = 1;
        
        for (int i = 0; i < s.length()-1; i++){
            if (s[i] == '('){
                
                if (s[i+1] == ')'){
                    sum += layer;
                }
                
                layer *= 2;
            }else{
                
                layer /= 2;
            }
        }
        
        return sum;
    