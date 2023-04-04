class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        multiset<int>s;
        for(int i=0; i<nums1.size(); i++){
            s.insert(nums1[i]);
        }

        for(int i=0; i<nums2.size(); i++){

            auto upper = s.upper_bound(nums2[i]) ;
            if(upper != s.end()){
                result.push_back(*upper);
                s.erase(upper);
            }else{
                auto itr = s.begin();
                result.push_back(*itr);
                s.erase(itr);
            }
        }

        return result;
    }
};