class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;

        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                if((i-1>=0 && flowerbed[i-1] == 0) || i-1<0){
                    if((i+1<flowerbed.size() && flowerbed[i+1] == 0) || i+1>=flowerbed.size()){
                        count++;
                        flowerbed[i] = 1;
                        if(count == n){
                            return true;
                        }
                    }
                }
            }
        }

        return n==0 ? true : false;
    }
};