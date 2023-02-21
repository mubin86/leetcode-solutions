class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int countB = 0;
        int maxB = INT_MIN;
        
        for(int i=0; i<=blocks.size()-k; i++){
           for(int j=i; j<k+i; j++){
               if(blocks[j] == 'B'){
                   countB++;
               }
           }
            maxB = max(maxB, countB);
            countB = 0;
        }

        return k-maxB;
    }
};