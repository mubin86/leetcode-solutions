class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0;
        int tempAlt = 0;
        
        for(int i=0; i<gain.size(); i++){
            tempAlt = tempAlt + gain[i];
            result = max(result, tempAlt);
        }
        
        return result;
    }
};