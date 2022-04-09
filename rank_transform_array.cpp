class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int>result;
        if(arr.size() ==0){
             return result;
        }
        vector<int>temp;
        temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> m;       
        int start = 1;
        m.insert({temp[0], 1});
        int prev = temp[0];
        
        for(int i=1; i<temp.size(); i++){
            
            if(temp[i] != prev){
                m.insert({temp[i], ++start});
                prev = temp[i];
            } else {
                 m.insert({temp[i], start});
            }
        }
        
        
        for(int i=0; i<arr.size(); i++){
            
            result.push_back(m[arr[i]]);
            
        }
        
        return result;
    }
};