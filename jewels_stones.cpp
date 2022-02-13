class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count = 0;
        
        for(int i =0; i<stones.length(); i++){
            
            auto it = jewels.find(stones[i]);
            
            if(it != string::npos){
                count++;
            }
            
        }
        
        return count;
    }
};