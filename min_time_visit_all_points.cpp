class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {  
//         int i = 1;
//         int count = 0;
        
//         while (i < points.size()){
            
//             int x1 = points[i-1][0];
//             int y1 = points[i-1][1];
            
//             int x2 = points[i][0];
//             int y2 = points[i][1];
            
//             while(x1 != x2 || y1 != y2){
                
//                 if(x1 < x2 && y1 < y2){
//                     x1 += 1;
//                      y1 += 1;  
                  
//                 } else if(x1 < x2 && y1 > y2){
//                      x1 += 1;  
//                      y1 -= 1;
                     
//                 } else if(x1 > x2 && y1 > y2){
//                     x1 -= 1;
//                     y1 -= 1;
                
//                 } else if(x1 > x2 && y1 < y2){
//                     x1 -= 1;
//                     y1 += 1;
                
//                 } else if(x1 == x2){
//                     if(y1 < y2){
//                         y1 += 1;
//                     }else {
//                         y1 -= 1;
//                     }
                    
//                 } else if(y1 == y2){
//                     if(x1 < x2){
//                         x1 += 1;
//                     }else {
//                         x1 -= 1;
//                     }
//                 }
       
//                 count++;
//             }
            
            
//             i++;
            
//         }
        
//         return count;
        
        //**another solution**//
        
        int sum=0;
        
        for(int i=0; i<points.size()-1; i++){
            
            int x=abs(points[i+1][0]-points[i][0]);
            
            int y=abs(points[i+1][1]-points[i][1]);
            
            sum += max(x,y);
        }
        
        
        
        return sum;
    }
};