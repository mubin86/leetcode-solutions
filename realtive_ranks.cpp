class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> vec2;
        vec2 = score;
        unordered_map<int, int>m;
        vector<string>result;
        
        sort(vec2.begin(), vec2.end(), greater<int>());
        
        for(int i=0; i < vec2.size(); i++){
            m.insert({vec2[i], i+1});
        }
        
        for(int i = 0; i<score.size(); i++){
            if(m[score[i]] == 1){
                result.push_back("Gold Medal");
            }else if(m[score[i]] == 2){
                result.push_back("Silver Medal");
            }else if(m[score[i]] == 3){
                result.push_back("Bronze Medal");
            }else{
                result.push_back(to_string(m[score[i]]));
            }
            
        }
        
        return result;
    }
};