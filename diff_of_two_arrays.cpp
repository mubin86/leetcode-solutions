class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>result;
        set<int>s1(nums1.begin(), nums1.end());
        set<int>s2(nums2.begin(), nums2.end());
        set<int>s3;
        set<int>s4;
        
        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
        vector<int> output1(s3.begin(), s3.end()); 
        result.push_back(output1);
        
        set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(s4, s4.begin())); 
        vector<int> outpu2(s4.begin(), s4.end()); 
        result.push_back(outpu2);
        
        return result;
    }
};