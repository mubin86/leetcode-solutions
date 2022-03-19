class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i= 0; i< nums.size(); i++){
            pq.push(nums[i]);
        }
        int i=0;
        while( i< k){
            int val = pq.top();
            if(val != 0){
                val = -val;
                pq.pop();
                pq.push(val);
            }
            i++;
        }
		
        int sum = 0;
        while(!pq.empty()){
            int value = pq.top();
                        pq.pop();
            sum += value;
        }
        
        return sum;
    }
};