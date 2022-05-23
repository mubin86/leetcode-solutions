class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        vector<int>temp;
        vector<int>next;
        int j;
        int count;
        
        for(int i=0; i<= arr.size()-m; i++){
            for(j = i; j<m+i; j++){
                temp.push_back(arr[j]);
            }
            
            count = 1;
            int nextVal= j;
            
            while(j+m <= arr.size()){
                next.clear();
                
                for(int k=j; k<j+m; k++){
                    next.push_back(arr[k]);
                    nextVal += 1;
                }
                
                if(temp == next){
                    count++;
                    if(count >= k){
                        return true;
                    }
                    j = nextVal;
                    
                }else{
                    temp.clear();
                    break;
                }
                 
            }
         
        }
        
        return false;
    }
};