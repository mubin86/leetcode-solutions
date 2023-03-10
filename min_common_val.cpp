class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;

        for(int i=0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }

        for(int i=0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }

        for(int i = 0; i< nums1.size(); i++){
            if(s2.find(nums1[i]) != s2.end()){
                return nums1[i];
            }
        }

        return -1;
    }
};