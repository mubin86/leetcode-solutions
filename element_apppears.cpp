class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
    
        int maxOccur = arr.size() / 4;
        
        unordered_map<int, int>m;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
            
        unordered_map<int, int>::iterator it;
        
        for(it = m.begin(); it != m.end(); it++){
            if(it->second > maxOccur){
                return it->first;
            }
            
            
        }
        
        return 0;
    }
};