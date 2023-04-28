class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr.size(); j++){
                if(i != j){
                    if(2*arr[i] == arr[j]){
                        return true;
                    }else if(2*arr[i] < arr[j]){
                        break;
                    }
                }
               
            }
        }

        return false;
    }
};