class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>result;
        
        char ch = ' ';
        
        stringstream ss1(s1);
        stringstream ss2(s2);
        
        vector<string>vs1;
        vector<string>vs2;
        
        string word1;
        string word2;
    
        while(std::getline(ss1, word1, ch)){
            vs1.push_back(word1);
            
        }
        
         while(std::getline(ss2, word2, ch)){
            vs2.push_back(word2);
        }
        
        unordered_map<string, int>m1;
        unordered_map<string, int>m2;
        
        for(int i = 0; i < vs1.size(); i++){
            
            m1[vs1[i]]++;
        }
        
        for(int i = 0; i < vs2.size(); i++){
            
            m2[vs2[i]]++;
        }
        
        
       for (auto x : m1){    
           if(m2.find(x.first) == m2.end()){
               
               if(x.second == 1){
                   result.push_back(x.first);
               }
           }
       }
        
        for (auto y : m2){  
           if(m1.find(y.first) == m1.end()){
               
               if(y.second == 1){
                   result.push_back(y.first);
               }
           }
       }
    
        
        return result;
        
    }
};