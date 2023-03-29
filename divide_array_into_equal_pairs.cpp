class Solution {
public:
    bool divideArray(vector<int>& nums) {
        priority_queue<int>pq;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        int i=0;
        while(i < nums.size()/2){
            int m = pq.top();
                    pq.pop();
            int n = pq.top();
                    pq.pop();
            if(m != n){
                return false;
            }
            i++;
        }

        return pq.empty();
    }
};