class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalWaitingTime = 0;
        int previousTime = customers[0][0];
        int totalTime;
        int waitingTime;
        
        
        for(int i=0; i<customers.size(); i++){
            
            if(customers[i][0] > previousTime){
                totalTime = customers[i][0] + customers[i][1];
            }else{
                totalTime = previousTime + customers[i][1];
            }
        
            waitingTime = totalTime - customers[i][0];
            
            previousTime = totalTime;
        
            totalWaitingTime += waitingTime;
        }
    
        return totalWaitingTime / customers.size();
    }
};