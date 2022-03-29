class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int dist1 = 0;
        int dist2 = 0;
        if(start > destination){
            swap(start, destination);    
        }
    
        for(int i = start; i< destination; i++){
            dist1 += distance[i];
        }
        
        while(true){
            start = start - 1;
            
            if(start < 0){
                start = distance.size() - 1; 
            }
            
            dist2 += distance[start];
            
            if(start == destination){
                break;
            }
            
        }
        
        
        return min(dist1, dist2);
    }
};