class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>um;
        map<int, vector<int>> m;
        vector<int>result;
        
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        
        for(auto it = um.begin(); it != um.end(); it++){
            m[it->second].push_back(it->first);    
        }
        
        for(auto it = m.begin(); it != m.end(); it++){
            vector<int>temp = it->second;
            sort(temp.begin(), temp.end(), greater<>());
            
            for(int i=0; i< temp.size(); i++){
                // for(int j=0; j<it->first; j++){
                //     result.push_back(temp[i]);
                // }
                result.insert(result.end(), it->first, temp[i]);
            }
        }
       
        return result;
    }
};