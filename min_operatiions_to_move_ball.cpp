class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>result;
        
        for(int i=0; i<boxes.size(); i++){
          int temp = 0;
            
          for(int k=0; k<i; k++){
            if(boxes[k] == '1'){
                temp += i-k;
            }
          }
          for(int j=i+1; j<boxes.size(); j++){                
                if(boxes[j] == '1'){
                    temp += j-i;
                }
           }
            
           result.push_back(temp);
        }
        
        return result;
    }
};