class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
     if(coordinates.size()<2) return false;
        
//         straight line eqn, y-y1 = m(x-x1);
//                             m= (y2-y1)/(x2-x1);
                                    
        
        int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        
        int x2=coordinates[1][0];
        int y2=coordinates[1][1];
            
        for(int i=2; i< coordinates.size();i++){
          
          int x=coordinates[i][0];
          int y=coordinates[i][1];
            
           if( ((y-y1)*(x2-x1)) != ((x-x1)*(y2-y1)) ){
               return false;
           }
       } 
        
        return true;
    }
};