class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        vector<string>unique;
        
        for(int i=0; i<arr.size(); i++) {
            m[arr[i]]++;
        }
        
        for(int i=0; i<arr.size(); i++){
            if(m[arr[i]] == 1) {
                unique.push_back(arr[i]);
            }
        }
        
        if(unique.size()>=k){
            return unique[k-1];
        }
        
        return "";
    }
};