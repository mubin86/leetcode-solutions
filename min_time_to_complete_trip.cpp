class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long ans = pow(10,14), l = 0, r = pow(10,14);

        while(l < r){
            long long mid = (l+r)/2;
            long long trips = 0;

            for(int i=0; i<time.size(); i++){
                trips += mid/time[i];
            }

            if(trips >= totalTrips){
                ans = min(ans, mid);
                r = mid ;
            }else{
                l = mid + 1;
            }
        }
        
        return ans;
    }
};