class Solution {
public:
    int minDeletions(string s) {
            
        unordered_map<char, int>m;
        multiset<int, greater<int> >ms;
        int result = 0;
        
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        
        for(auto it = m.begin(); it!=m.end(); it++){
           ms.insert(it->second);
        }
        
        while(!ms.empty()){
            auto it = ms.begin();
            int num = *it;
            ms.erase(it);
            auto pos = ms.find(num);
            
            if(pos != ms.end()){
                
                while(ms.find(num) != ms.end()){
                    num = num-1;
                    result += 1; 
                }
                
                if(num != 0){
                    ms.insert(num);
                }
            }
          
        }
        
        return result;
    }
};