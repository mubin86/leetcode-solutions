class Solution {
public:

    bool isFeasible(vector<int>& wt,int days,int capacity){
        int count=1;
        int totalWeightt=0;

        for(auto& i:wt){
            totalWeightt += i;

            if(totalWeightt > capacity){
                count++;
                totalWeightt = i;
            }
        }

        if(count<=days){
            return true;
        }

        return false;

    }

    int shipWithinDays(vector<int>& weights, int days) {
        int len=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int mincp;
        
        while(low<=high){
            int mid=(low+(high-low)/2);

            if(isFeasible(weights,days,mid)){
                mincp = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return mincp;
    }
};