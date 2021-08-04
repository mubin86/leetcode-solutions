class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s1;
        for(int i=0; i<nums.size();i++){
            s1.insert(nums[i]);
        }
        set<int>::iterator itr;
        nums.clear();
    
         for(itr = s1.begin(); itr != s1.end(); itr++){
             nums.push_back(*itr);
        }
             return nums.size();
    }
};