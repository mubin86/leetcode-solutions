class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>result;
        vector<int>oneLost;
        set<int>allPlayer;
        set<int>looser;
        set<int> winnerSet;
        map<int, int>oneLostMap;

        for(int i=0; i<matches.size(); i++){
            oneLostMap[matches[i][1]]++;
            allPlayer.insert(matches[i][0]);
            allPlayer.insert(matches[i][1]);
            looser.insert(matches[i][1]);
        }

        for(auto it = oneLostMap.begin(); it!= oneLostMap.end(); it++){
            if(it->second == 1){
                oneLost.push_back(it->first);
            }
        }

        set_difference(allPlayer.begin(), allPlayer.end(), looser.begin(), looser.end(),
        inserter(winnerSet, winnerSet.end()));

        vector<int> winners{winnerSet.begin(), winnerSet.end()};

        result.push_back(winners);
        result.push_back(oneLost);

        return result;
    }
};