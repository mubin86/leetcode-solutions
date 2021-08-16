class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> s;

        for(int i = 0; i<m; i++){
            s.insert(nums1[i]);
        }
        for(int i = 0; i<n; i++){
            s.insert(nums2[i]);
        }

        multiset<int>::iterator it;
        int j = 0;

        for (it = s.begin(); it != s.end(); it++) {

            nums1[j] = *it;
            j++;
        }    
    }
};