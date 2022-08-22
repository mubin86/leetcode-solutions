class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        multimap<int, int, greater<int> > mymap;
        vector<int>ans;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
           
        }
        
        for(auto it = m.begin(); it != m.end(); it++){
             mymap.insert(make_pair(it->second, it->first));    
        }
        
        int i = 0;
        for(auto itr = mymap.begin(); itr != mymap.end(); itr++){
             if(i<k){
                 ans.push_back(itr->second);
                 i++;
             }else{
                 break;
             } 
        }
        
        return ans;
    }
};