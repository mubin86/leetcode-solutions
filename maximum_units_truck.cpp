class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int, int>>pq;
        
        for(int i=0; i<boxTypes.size(); i++){
            pq.push({boxTypes[i][1], boxTypes[i][0]});
        }
        
        int result = 0;
        
        while(!pq.empty()){
            pair<int, int>p = pq.top();
                              pq.pop();
            int takenUnit = min(truckSize, p.second);    
            result += p.first * takenUnit;
            truckSize -= takenUnit;
            if(truckSize == 0){
                break;
            }
        }
        
        return result;;
    }
};