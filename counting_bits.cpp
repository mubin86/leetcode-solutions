class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        
        // for(int i = 0; i<=n; i++){
        //      int temp = __builtin_popcount(i);
        //     ans.push_back(temp);
        // }
        
        
        //using bitset
        
          for(int i = 0; i<=n; i++){
              
              bitset<32>b(i); //bitset converts decimal to binary of 32 bits which must be specified in compile time
            ans.push_back(b.count());
        }
        
        return ans;
    }
};