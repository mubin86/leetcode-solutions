class Solution {
public:
    map<int, int>m;
    set<string>s;
    string str;

    void backtracking(string tiles){
        for(int i=0; i<tiles.size(); i++){
            if(m[i] != 1){
                m[i] = 1;
                str.push_back(tiles[i]);
                s.insert(str);
                backtracking(tiles);
                str.pop_back();
                m[i] = 0;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        backtracking(tiles);
        return s.size();
    }
};