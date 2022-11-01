class Solution {
public:
    int countPoints(string rings) {
        
        unordered_map<char, vector<char>>m;
        int count = 0;
        vector<char>temp;
        
        for(int i=1; i<rings.size(); i+=2){
            auto itr = m.find(rings[i]);
            
            if(itr != m.end()){
                temp = m[rings[i]];

                if(find(temp.begin(), temp.end(), rings[i-1]) == temp.end()){
                    temp.push_back(rings[i-1]);
                    itr->second = temp;
                } 
                temp.clear();
                
            }else{
                temp.push_back(rings[i-1]);
                m.insert({rings[i], temp});
                temp.clear();
            }
        }
        
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second.size() == 3){
                count++;
            }
        }
         
        return count;
    }
};