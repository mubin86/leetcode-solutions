class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {    
        if(trust.size() == 0 && n==1){
            return 1;
        }
        if(trust.size() == 0 && n!=1){
            return -1;
        }
        
        unordered_map<int, int>m1;
        unordered_map<int, int>judgeTrust;
        
        for(int i = 0; i< trust.size(); i++){
            
            for(int j=0; j<trust[i].size(); j++){
                
                if( j == 0){
                    m1.insert({trust[i][j], 1});
                    
                }else if( j==1 ){
                    judgeTrust[trust[i][j]]++;
                }
                
            }
        }
        
        
       int result = -1;
        bool flag = false;
        unordered_map<int, int>::iterator it;
        
        for(it = judgeTrust.begin(); it!=judgeTrust.end(); it++){
            if(it->second == n-1){
                if(m1.find(it->first) == m1.end()){
                    result = it->first;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            } 
        }
        

        return result;
        
    }
};