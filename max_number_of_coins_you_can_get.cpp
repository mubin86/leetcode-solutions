class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int rem = piles.size()/3, res=0;

        while(rem--){
            piles.pop_back();
            res += piles.back();
            piles.pop_back(); 
        }
        return res;
    }
};