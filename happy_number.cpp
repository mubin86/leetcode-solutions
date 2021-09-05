class Solution {
public:
//     bool flag = true;
//     void findHappy(int n){
//         int sum =0;
//         string str=to_string(n);
        
//         for(int i=0; i<str.length(); i++){
//             int m = str[i] - '0';
//             sum += pow(m, 2);      
//         }
        
        
//         if(sum == 4){
//             flag = false;
//             return;
//         }
//         if(sum == 1){
//             flag=true;
//             return;
//         }
//         findHappy(sum);
       
//     }
    bool isHappy(int n) {
        // findHappy(2); 
        // return flag;
        int sum=0;
       while(n>0)
        {
                sum +=pow(n%10,2);
                n /=10;
        }
       if(sum==4)
           return false;
        
        if(sum!=1)
            isHappy(sum);
        
        return true;
        
    }
};