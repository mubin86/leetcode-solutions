class Solution {
public:
    string largestOddNumber(string num) {
           
        for(int i=num.size()-1; i>=0; i--)
        {
            char c = num[i];
            int number = c - '0';

            if(number % 2 != 0){
               return num.substr(0, i+1);
            }
        }
    
        return "";
    }
};