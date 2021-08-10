class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        for(int i = 0; i<s.length(); i++){
            
            switch(s[i]) {
              case 'I':
                if(s[i+1] == 'V' || s[i+1] == 'X'){
                    count = count -1;
                }else{
                    count = count + 1;
                }   
                break;
              case 'V':
                count = count + 5;
                break;
              case 'X':
                     if(s[i+1] == 'L' || s[i+1] == 'C'){
                        count = count -10;
                     }else{
                        count = count + 10;
                     }
                break;      
              case 'L':
                 count = count + 50;
                break;
              case 'C':
                 if(s[i+1] == 'D' || s[i+1] == 'M'){
                        count = count -100;
                     }else{
                        count = count + 100;
                     }
                 break;
              case 'D':
                count = count + 500;
                break;
               case 'M':
                count = count + 1000;
                break;
              default:
                break;
            }
        }
        
        return count;
    }
};