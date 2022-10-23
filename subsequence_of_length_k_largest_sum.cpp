class Solution { 
static bool sortbySecond(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
} 
    
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        vector<int>result;
        vector<pair<int, int>>selectedNum;
        priority_queue<pair<int, int>> pq;
        
        for(int i=0; i<nums.size(); i++){
            pq.push(make_pair(nums[i], i));
        }
        
        int i = 0;
        while(i < k){
            pair<int, int> p = pq.top();
                                pq.pop();
            
            selectedNum.push_back(p);
            i++;
            
        }
        
        sort(selectedNum.begin(), selectedNum.end(), sortbySecond);
        
        for(int i=0; i<selectedNum.size(); i++){
            result.push_back(selectedNum[i].first);
        }
        
        return result;
    }
};