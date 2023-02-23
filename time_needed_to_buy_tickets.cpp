class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        unordered_map<int, int>m;
        int result = 0;
        int i = 0; 
        
        for(int i=0; i<tickets.size(); i++){
            m.insert({i, tickets[i]});
        }

        while(1){
            if(m[i] > 0){
                result++;
                m[i]--;
            }
            i++;
        
            if(m[k] == 0){
                return result;
            }

            if(i == tickets.size()){
                i = 0;
            }
        }

        return result;
    }
};