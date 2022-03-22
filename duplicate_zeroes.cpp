class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        
        while(i < arr.size()){
           
            if(arr[i] == 0){
               arr.insert(arr.begin() + i, 0);
                auto it = arr.end()-1;
                arr.erase(it);
                i += 2;
            }else{
                i++;
            }
        }
        
    }
};