class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // arr={3,8,-10,23,19,-4,-14,27};
        vector<vector<int>>result;
        vector<int>temp;
        
        sort(arr.begin(), arr.end());
        int diff = INT_MAX;;
        
        int start = arr[0];
        int diffRes;
        bool flag;
        
        for(int i=1; i<arr.size(); i++){
            diffRes = abs(start - arr[i]);
            diff = min(diff, diffRes);
            start = arr[i];
            
        }
        
        for(int i =0; i< arr.size()-1; i++){
                
            if(abs(arr[i+1] - arr[i]) == diff){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                result.push_back(temp);
                temp.clear();
            }
                
        }
            
        
        return result;
    }
};