class Solution {
public:
//     int maxArea(vector<int>& height) {
//         int area=INT_MIN;
//         int temp;
//         int sum=1;
        
//         for (int i = 0; i < height.size(); i++){
//             for(int j = i+1; j < height.size(); j++){
//                 sum = (j-i) * min(height[i], height[j]);
//                 if(sum > area){
//                     area = sum;
//                 }
//             }
//         }
        
//         return area;
        
//     }
    
       int maxArea(vector<int>& height) {
        int i=0, j = height.size()-1;
        int result = 0;
        while(i<j) {
            result = max(result, (j-i)*min(height[i], height[j]));
            
            if(height[i] < height[j]) {
                i++;
            }
            
           else {
                j--;
            }
        }
        
        return result;
        
    }
};