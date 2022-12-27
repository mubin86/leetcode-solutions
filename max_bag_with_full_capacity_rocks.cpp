class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int count = 0;
        for(int i=0; i<capacity.size(); i++){
            pq.push(capacity[i] - rocks[i]);
        }

        while(!pq.empty()){
            int val = pq.top();
                      pq.pop();

            if(additionalRocks >= val){
                additionalRocks -= val;
                count++;
            }else{
                return count;
            }
        }

        return count;
    }
};