class Solution {
public:
    bool isPathCrossing(string path) {
        int count = 0, count_s = 0;
        set<pair<int,int>> s;
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        s.insert(p);
        
        for(int i = 0; i < path.size(); ++i){
            if(path[i] == 'N'){
                p.second += 1;
            }
            else if(path[i] == 'S'){
                 p.second -= 1;
            }   
            else if(path[i] == 'E'){
                p.first += 1;
            } 
            else{
                p.first -= 1;
            }
               
            
            if(s.find(p) != s.end()){
                 return 1;
            }
            else{
                s.insert(p);
            }
                
        }
        
        return 0;
    }
};