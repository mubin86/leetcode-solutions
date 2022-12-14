class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int>m;
        int result = 0 ;

        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }

        while(1){
            for(int i=0; i < target.size(); i++){
                auto it = m.find(target[i]);
                if(it != m.end()){
                    int temp = it->second - 1;
                    if(temp == 0){
                        m.erase(target[i]);
                    }else{
                        m[target[i]] = temp;
                    }
                }else{
                    return result;
                }
            }
            result++;
        }


        return result;
    }
};