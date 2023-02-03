class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>s;
         for(int i=0; i<paths.size(); i++){
            s.insert(paths[i][0]);
            s.insert(paths[i][1]);
        }

        for(int i=0; i<paths.size(); i++){
            s.erase(paths[i][0]);
        }

        auto it = s.begin();

        return *it;
    }
};