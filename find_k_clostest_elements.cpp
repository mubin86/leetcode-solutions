class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start, end;
        vector<int>result;
        bool flag = false;
        int pivot = -1;        
        int left;
        int right;
        
        if(arr[0] >= x){
            start = 0;
            end = k;
            flag = true;
        }else if (x >= arr[arr.size()-1]){
            start = arr.size()-k;
            end = arr.size();
            flag = true;
        }
        
        if(flag){
            for(int i = start ; i < end; i++){
                result.push_back(arr[i]);        
            }
            sort(result.begin(), result.end());
            return result;
        }else{
            for(int i=0; i<arr.size()-1; i++){
                if(arr[i] == x){
                    pivot = i;
                    left = i-1;
                    right = i+1;
                    break;
                }
                
                if(x > arr[i] && x < arr[i+1]){
                    left = i;
                    right = i+1;
                    break;
                }
            }
            
            if(pivot != -1){
                result.push_back(arr[pivot]);
            }
            
            while(left >= 0 && right < arr.size()){
                
                int diff1 = abs(x - arr[left]);
                int diff2 = abs(arr[right] -x);
                
                if(diff1 == diff2){
                    result.push_back(arr[left]);
                    left--;
                } 
                else if(diff1 < diff2){
                    result.push_back(arr[left]);
                    left--;
                }
                else{
                    result.push_back(arr[right]);
                    right++;     
                }
                
                if(result.size() == k){
                    break;
                }
            }
            
            while(result.size() < k){
                if(right == arr.size()){
                    result.push_back(arr[left]);
                    left--;
                }else{
                    result.push_back(arr[right]);
                    right++;
                }               
            }
            
        }
        sort(result.begin(), result.end());

        return result;        
    }
};