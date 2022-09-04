class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int result0 = false;
        int result1 = false;
        int result2 = false;
        
        for(int i=0; i<triplets.size(); i++){
            int val0 = triplets[i][0];
            int val1 = triplets[i][1];
            int val2 = triplets[i][2];
            
            if(!result0){
                if(val0 == target[0]){
                 if(val1 <= target[1] && val2<=target[2]){
                    result0 = true;
                 }
                }
            }
            
            if(!result1){
              if(val1 == target[1]){
                if(val0 <= target[0] && val2<=target[2]){
                    result1 = true;
                }
              } 
            }
             
            if(!result2){
               if(val2 == target[2]){
                 if(val0 <= target[0] && val1<=target[1]){
                    result2 = true;
                }
              } 
            }
        }
        
        return result0 & result1 & result2;
    }
};