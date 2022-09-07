class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>result;
        
        for(int i=0; i<queries.size(); i++){
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            
            int count = 0;
            
            for(int j=0; j<points.size(); j++){
                
                int px = points[j][0];
                int py = points[j][1];
                
                if((pow(px-x,2) + pow(py-y,2)) <= pow(r, 2)){
                    count += 1;
                }
            }
            
            result.push_back(count);
            
        }
        
        return result;
    }
};