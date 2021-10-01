class Solution {
public:
    int findComplement(int num) {
        // bitset<32>temp(bset1);
        // int count = 32;
        // const int N=floor(log2(bset1))+1; //total no of bits count
        // for(int i=32; i>=1; i--){
        //     if(temp.test(i)){
        //         break;
        //     }else{
        //         count--;
        //     }
         
//         }
//         cout<<"count is"<<count;
//         const int m = count;
        
//         bitset<m>b(bset1);
       
//         // for(int i = 1; i<= count; i++){
//         //     if(b.test(i)){
//         //         b.set(i, 0);
//         //     }else{
//         //          b.set(i);
//         //     }
//         // }
//         b.flip();
        
        
//         return b.to_ulong();
        
    long int base = 1;
    int ans = 0;
        
    while(num>0)
    {
      int lastdigit =  num&1;
       num = num>>1;
     
       if(lastdigit==0)
       {
         ans += base;
       }
      
        
        base = base*2;
        
    }
        
        return ans;

    }
};