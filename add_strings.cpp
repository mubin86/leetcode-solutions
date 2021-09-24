class Solution {
public:
    string addStrings(string num1, string num2) {        
        int i = num1.length()-1;
        int j = num2.length()-1;
        
        string str="";     
        bool flag = false;
        
        while(i >= 0 && j >= 0){
        
            int n1 = num1[i] - '0';
            int n2 = num2[j] - '0';
            
            int temp = n1+n2;
            
            if(flag){
                temp += 1;
            }
            
            if(temp >= 10){
                flag = true;
                temp = (temp%10);
            }else{
                flag = false;
            }
            
            str.insert(0, to_string(temp));
            i--;
            j--;
        }
         
          while(i >= 0){
                int n4 = num1[i] - '0';       
              if(flag){
                    n4 += 1;
                }
             
              if(n4 >= 10){
                    flag = true;
                    n4 = (n4%10);
                }else{
                    flag = false;
                }
                str.insert(0, to_string(n4));
                i--;
            }

        while(j >= 0){
            int n3 = num2[j] - '0';
            
            if(flag){
                n3 += 1;
            }
            
            if(n3 >= 10){
                flag = true;
                n3 = (n3%10);
            }else{
                flag = false;
            }
            
             str.insert(0, to_string(n3));
        
            j--;
        }
    
         if(i < 0 && j<0 && flag){
            str.insert(0, to_string(1));
            return str;
        }
        
        return str;
    }
};