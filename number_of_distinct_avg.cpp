class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>s;
        priority_queue<int>pq;
        priority_queue<int, vector<int>, greater<int> > pqReverse;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
            pqReverse.push(nums[i]);
        }

        int count = pq.size()/2;
        while(count> 0){
            int minVal = pqReverse.top();
                         pqReverse.pop();
            int maxVal = pq.top();
                         pq.pop();
            double avg = (double)(minVal+maxVal)/2;
            s.insert(avg);
            count--;
        }

        return s.size();
    }
};