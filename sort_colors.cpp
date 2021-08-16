class Solution {
public:
    void sortColors(vector<int>& nums) {
          multiset<int> s;
        for(int i = 0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        multiset<int>::iterator it;
        int j = 0;
        for (it = s.begin(); it != s.end(); it++) {
            nums[j] = *it;
            j++;
        }
    }
};