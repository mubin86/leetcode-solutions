class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>missing;
        set<int>s1;
        set<int>s2;
        
        for(int i=1; i<=10000; i++){
            s1.insert(i);
        }
        
        for(int i=0; i<arr.size(); i++){
            s2.insert(arr[i]);
        }
        
        std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::inserter(missing, missing.end()));
     
        return missing[k-1];
    }
};