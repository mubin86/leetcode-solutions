class Solution {
public:
    int secondHighest(string s) {
        set<int, greater<int> >st;
        
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
              char c = s[i];
              c = c - '0';
              st.insert(c);
            }
        }
        
        if(st.empty() || st.size() == 1){
            return -1;
        }
        
        auto it = st.begin();
         ++it;

        return *it;
    }
};