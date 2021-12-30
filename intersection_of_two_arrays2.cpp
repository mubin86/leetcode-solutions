class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>m;
        vector<int>result;
        
        for(int i = 0; i<nums1.size(); i++){
            m.insert({nums1[i], m[nums1[i]]++});
        }
        
        for(int j=0; j<nums2.size(); j++){
            if(m.find(nums2[j]) != m.end()){
                
                m.insert({nums2[j], m[nums2[j]]--});
                if(m[nums2[j]] == 0){
                    m.erase(nums2[j]);
                }
                result.push_back(nums2[j]);
            }
        }
        
        return result;
    }
};
