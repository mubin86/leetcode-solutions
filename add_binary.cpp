class Solution {
public:
    string addBinary(string a, string b) {
       int m = a.length();
        int n = b.length();
        bool flag = false;
        string result = "";
        int temp1;
        int temp2;
        
        while(m != 0 || n !=0){
            if(m!=0){
                char c = a[m-1];
                temp1 = c - '0';
            }
           
            if(n!=0){
                 char d = b[n-1];
                temp2 = d - '0';
            }
           
            int sum = temp1+temp2;
            
            if(flag == true){
                sum += 1;
            }
            
            if(sum == 2){
                result += "0";
                flag = true;
            }else if(sum == 3){
                result.push_back('1');
                flag = true;
            }else{
                
                if(sum == 0){
                     result.push_back('0');
                }else{
                         result.push_back('1');
                }
           
                flag = false;
            }
            
            sum = 0;
            temp1 = 0;
            temp2 = 0;
            if(m != 0){
                   m--;
            }
         
            if(n != 0){
                   n--;
            }
        }
        
        if(flag == true){
             result.push_back('1');
        }
        
        int len = result.length();
        for(int i =0 ; i< len/2 ; i++){
            swap(result[i], result[len-i-1]);
        }
        
        return result;
    }
};