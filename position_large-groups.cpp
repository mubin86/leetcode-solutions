class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        vector<int>temp;
        int count = 1;
        
        int start = 0;
        int end = 0;
        
        for(int i=0; i< s.length(); i++){
            
            if(s[i] == s[i+1]){
                if(count == 1){
                    start = i;
                    
                }       
                count++;       
                
            }else{
                
                if(count >= 3){
                    ans.push_back({start, i});
                }
                count = 1;
                start = 0;
            }
            
        }
        
        return ans;
        
    }
};