class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>ans;
        vector<bool>visited(n+1, false);
        int step = 1;
        int i = 1;

        while(1){
            int nextFriend = i%n;
            if(nextFriend == 0){
                nextFriend = n;
            }
            if(visited[nextFriend]){
                break;
            }
            visited[nextFriend] = true;
            
            i = i + (step*k);
            step++;
        }

        for(int i=1; i<visited.size(); i++){
            if(!visited[i]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};