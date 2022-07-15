class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int result = -1;
        int distance = INT_MAX;
        
        for(int i=0; i<points.size(); i++){
            
            if(points[i][0] == x || points[i][1] ==y){
                int currentDistance = abs(points[i][0] -x) + abs(points[i][1] - y);
                
                if(currentDistance < distance){
                    result = i;
                    distance = currentDistance;
                }
                
            }
        }
        
        return result;
    }
};