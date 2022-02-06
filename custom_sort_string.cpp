class Solution {
public:
    
    string customSortString(string order, string s) {
        
        string temp = "";
        
        for(int i=0; i< order.length(); i++){
            char c = order[i];
            
            auto find = s.find(c);
            
            while(find != string::npos){
                temp += c;
                
                s.erase(s.begin()+find);
                
                find = s.find(c);
             
            }
        }
        
        return temp + s;
    }
};