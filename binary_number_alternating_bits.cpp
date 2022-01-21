class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>bset(n);
        bool flag = false;
        
        for(int i=bset.size()-1; i>0; i--){    
            if(!flag){
                if(bset[i] == 1){
                    flag = true;
                } 
            }
            
            if(flag == true){
                if(bset[i] == bset[i-1]){
                    return false;
                }
                
            }
        }
        
        //**another approach
        
        // int temp = n&1;
        // n = n>>1;
        // while(n!=0)
        // {
        //     if((n&1)==temp)
        //         return false;
        //     temp = n&1;
        //     n=n>>1;
        // }
        
        return true;
        
    }
};