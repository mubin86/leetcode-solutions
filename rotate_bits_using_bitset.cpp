class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      bitset<32> set32;
        int temp = 31; 
        for(int i = 0; i<32; i++){
            if((n & 1) == 1){
                set32[temp] = 1; 
            }else{
                set32[temp] = 0; 
            }
            n= n>>1;
            temp--;
        }
        
        return set32.to_ulong();
    }
};