class Solution {
public:
    string removeStars(string s) {
        string result = "";
        for(int i=0; i< s.size(); i++){
            if(s[i] != '*'){
                result.push_back(s[i]);
            }else{
                result.pop_back();
            }
        }

        return result;
    }
};