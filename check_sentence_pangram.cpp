class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int>m;
        int count = 0;
        
        for(int i=0; i<sentence.length(); i++){
            if(m.find(sentence[i]) == m.end()){
                count += 1;
                m.insert({sentence[i], 1});
            }
        }
        
        return count == 26;
    }
};