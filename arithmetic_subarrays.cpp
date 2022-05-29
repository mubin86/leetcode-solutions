class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool>ans;
        priority_queue<int>pq;
        
        for(int i=0; i<l.size(); i++){
            int m = l[i];
            int n = r[i];
            
            for(int j=m; j<=n; j++){
                pq.push(nums[j]);
            }
            
            bool flag = true;
            int v1 = pq.top();
                     pq.pop();
            int v2 = pq.top();
            
            int diff = v1 - v2;
            
            while(!pq.empty()){
               v1 = pq.top();
                    pq.pop();
                
                if(!pq.empty()){
                    v2 = pq.top();
                    
                    int nextDiff = v1 - v2;
                    if(diff != nextDiff){
                        flag = false;
                    }
                }
            }
            
            ans.push_back(flag);
        }
        
        return ans;
    }
};