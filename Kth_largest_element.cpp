class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        
        int count = 1;
        while(1){
            int val = pq.top();
            if(count == k){
                return val;
            }
            count++;
            pq.pop();
        }
        
        return 0;
    }
};