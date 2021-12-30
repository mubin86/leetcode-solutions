class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        int sum = INT_MAX;
        
        for(int i=0; i<list1.size(); i++){
            
            for(int j=0; j<list2.size(); j++){
                
                if(list1[i] == list2[j]){
                    
                  if((i+j) < sum){
                      sum=i+j;
                      if(!result.empty()){
                          result.pop_back();
                      }
                    
                      result.push_back(list1[i]);
                  }
                  else if((i+j) == sum){
                      result.push_back(list1[i]);
                  }
                
                }
            }
        }
    
    
        return result;
    
    
    }
};