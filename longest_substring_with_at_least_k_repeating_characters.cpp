class Solution {
public:
    int result = 0;
    unordered_map<char, int> m;

    void check(unordered_map<char, int> &m, int k){
        bool flag = true;
        int tempCount = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second < k){
                flag = false;
                break;
            }else{
               tempCount += it->second;
            }
        }

        if(flag){
            result = max(result, tempCount);
        }
    }

    int longestSubstring(string s, int k) {
        for(int i=0; i<s.size(); i++){
            for(int j = i; j<s.size(); j++){
                m[s[j]]++;
                check(m, k);
            }
            m.clear();
        }

        return result;    
    }
};