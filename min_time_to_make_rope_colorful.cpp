class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int prev = 0;
        int minTime = 0;
        
        for(int i=1; i<colors.size(); i++){
            if(colors[prev] == colors[i]){
                if(neededTime[prev] > neededTime[i]){
                    minTime += neededTime[i];
                }else{
                    minTime += neededTime[prev];
                    prev = i;
                }
            }else{
                prev = i;
            }
        }

        return minTime;
    }
};