class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size() < 3 || arr[0] > arr[1]){
            return false;
        }
        
        bool flag = false;
        
        for(int i=0 ; i< arr.size()-1; i++){
            if( arr[i] == arr[i+1]){
                    return false;
            }
            
            if(!flag){
                if(arr[i] > arr[i+1]){
                    flag = true; 
                    continue;
                }
            }
            
            if(flag){
                if(arr[i] < arr[i+1]){
                    return false;
                }
            }   
            
        }
        
        return flag;
    }
};