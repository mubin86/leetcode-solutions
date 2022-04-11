class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>m;
        
        for(int i=0; i<arr.size(); i++){
            
            m[arr[i]]++;
        }
        
        int lucyNum = -1;
        
        unordered_map<int, int>::iterator it;
        
        for(it = m.begin(); it != m.end(); it++){
            
            if(it->first == it->second){
                lucyNum = max(lucyNum, it->first);
            }
            
        }
        
        return lucyNum;
        
    }
};