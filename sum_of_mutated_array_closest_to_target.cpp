class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if(target >= sum){
            auto it = max_element(arr.begin(), arr.end());
            return *it;
        }
        int minNumber = 0;
        int prevDiff = INT_MAX;
        int result = 0;
        
        while(1){
            int currentSum = 0;
            for(int i=0; i<arr.size(); i++){
                if(arr[i] > minNumber){
                    currentSum += minNumber;
                }else{
                    currentSum += arr[i];
                }
            }

            int currentDiff = abs(target - currentSum);
            if(currentDiff < prevDiff){
                prevDiff = currentDiff;
                result = minNumber;
            }else{
                break;
            }

            minNumber++;
        }

        return result;
    }
};