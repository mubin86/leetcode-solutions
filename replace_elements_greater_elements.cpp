class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
//         vector<int>result;
        
//         for(int i=0; i < arr.size()-1; i++){
//             int temp = INT_MIN;
//             for(int j=i+1; j < arr.size(); j++){
//                 temp = max(temp, arr[j]);
//             }
//             result.push_back(temp);
//         }
        
//         result.push_back(-1);
        
//         return result;
        
        
        
        //***second approach***////
        if(arr.size() == 1){
            arr[0] = -1;    
    	    return arr;
        }
        
        int temp1 = arr[arr.size()-1];
        int temp2 = arr[arr.size()-2];
        
        int maxVal = max(temp1, temp2);
        
        int temp;
        
        for(int i = arr.size()-3; i>=0; i--){
            
            temp = maxVal;
            
            maxVal = max(maxVal, arr[i]);
            
            arr[i] = temp;
        }
        
        arr[arr.size()-2] = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        
        return arr;
        
    }
};