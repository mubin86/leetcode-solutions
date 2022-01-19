class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      priority_queue<int> pq;
        
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        
        int m = pq.top();
                pq.pop();
        int n = pq.top();
                pq.top();
        
        return (m-1) * (n-1);
    }
};