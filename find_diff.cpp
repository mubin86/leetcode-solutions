class Solution {
public:
    char findTheDifference(string s, string t) {

        for(int i=0; i<t.length(); i++){
           auto itr = s.find(t[i]);
            if(itr != string::npos){
                s.erase(s.begin()+itr);
            }else{
                 return t[i];
            }
            
        }
        
        return 0;
    }