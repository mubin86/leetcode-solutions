class Solution {
public:
    
    int trailingZeroes(int n) {
        int p =1;
        int count = 0;
        int temp = n;
        while(temp!=0){
            
            int temp = n /pow(5, p);
            if(temp != 0){   
                count += temp;
            }else{
                break;
            }
            p++;
        }    
        return count;
    }
};