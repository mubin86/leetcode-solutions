class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        
        for(int i=0; i<endTime.size(); i++){
            if(queryTime >= startTime[i] && queryTime <= endTime[i]){
                count += 1;
            }
        }
        
        return count;
    }
};