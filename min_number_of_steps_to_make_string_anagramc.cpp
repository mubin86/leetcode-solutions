class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int>ms;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            ms[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            auto sptr = ms.find(t[i]);
            
            if(sptr != ms.end()){
                ms[t[i]]--;
                if(ms[t[i]] == 0){
                    ms.erase(t[i]);
                }
            }else{
                count++;
            }
        }

        return count;
    }
};