class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int>m;
        int minSubstring = 1;

        for(int i=0; i <s.size(); i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]]++;
            }else{
                minSubstring++;
                m.clear();
                m[s[i]]++;
            }
        }

        return minSubstring;
    }
};