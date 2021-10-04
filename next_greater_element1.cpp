class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     int size = nums1.size();
        vector<int>result;
        
        for(int i=0; i<size; i++)
        {
            int x = nums1[i];
            auto it = find(nums2.begin(), nums2.end(), x);
            int j = it-nums2.begin();
            
            
            int t=0;
            for(int k = j+1; k<nums2.size(); k++)
                if(nums2[k]>x)
                {
                    t=1;
                    result.push_back(nums2[k]);   
                    break;
                }
            if(t==0){
                result.push_back(-1);
            }
                
        }
        return result;
    }
};