class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int result=0;
        for(int i=0; i<timeSeries.size(); i++){
            int temp = timeSeries[i] + duration;     
            if(i == timeSeries.size()-1){
                result += duration;  
                return result;
            }
            else if((temp-1) < timeSeries[i+1]){
                result += duration;  
            }else if((temp-1) == timeSeries[i+1]){
                result = result + (duration-1);
            }else{
                int temp2 = timeSeries[i+1] - timeSeries[i];
                result += temp2;
            }
        }
        
        return result;
    }
};