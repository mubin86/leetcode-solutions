class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int, int>visited;
        set<int>room;

        for(int i=0; i<rooms.size(); i++){
            visited.insert({i, 0});
        }

        for(int i=0; i<rooms[0].size(); i++){
            room.insert(rooms[0][i]);
        }

        visited[0] = 1;
        while(room.size() > 0){
            auto key = room.begin();
            for(int i=0; i<rooms[*key].size(); i++){
                if(room.find(rooms[*key][i]) == room.end()){
                    if(visited[rooms[*key][i]] == 0){
                        room.insert(rooms[*key][i]);
                    }   
                }  
            }
            visited[*key] = 1;
            room.erase(key);
        }

        for(auto it = visited.begin(); it != visited.end(); it++){
            if(it->second == 0){
                return false;
            }
        }

        return true;
    }
};