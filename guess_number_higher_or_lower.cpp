class Solution {
public:
    int guessNumber(int n) {
        long long int low= 1;
        long long int high = n;

        while(low<=high){
            long long int mid = (low+high)/2;
            int res = guess(mid);

            if(res == -1){
                high = mid-1;
            }else if(res == 1){
                low = mid+1;
            }else{
                return mid;
            }
        }

        return 0;
    }
};