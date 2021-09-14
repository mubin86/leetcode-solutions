class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int>m;
        
        for(int i = 0; i< nums1.size(); i++){
           m.insert({nums1[i], nums1[i]});
        }
        
        for(int j = 0; j <nums2.size(); j++){
            if(m.find(nums2[j]) != m.end()){
                auto it = find(result.begin(), result.end(), nums2[j]);
                if(it == result.end()){
                    result.push_back(nums2[j]);
                }
            }
        }
        
        return result;
    }
};