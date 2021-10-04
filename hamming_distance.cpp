class Solution {
public:
    int hammingDistance(int x, int y) {
    int count = 0;
        //1st approach
//       bitset<32>bx(x);
//         bitset<32>by(y);
        
//         for(int i =0; i<32; i++){
//             if(bx[i] != by[i]){
//                 count++;
//             }
//         }
        
        //2nd approach
        
        int temp=x^y;
        
        while(temp){
            if(temp&1){
                count++;
            }
               
            temp=temp>>1;
            
        }
       
        
        return count;
    }
};