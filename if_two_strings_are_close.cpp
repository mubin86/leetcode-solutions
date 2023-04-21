class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }
        set<char>s1,s2;
        unordered_map<char, int>m1;
        unordered_map<char, int>m2;
        multiset<int>ms1, ms2;
        for(int i=0; i < word1.size(); i++){
            m1[word1[i]]++;
            m2[word2[i]]++;
            s1.insert(word1[i]);
            s2.insert(word2[i]);
        }

        auto it1 = m1.begin();
        auto it2 = m2.begin();
        while(it1 != m1.end() && it2 != m2.end()){
            ms1.insert(it1->second);
            ms2.insert(it2->second);
            it1++;
            it2++;
        }

        return ms1 == ms2 && s1 == s2;
    }
};