class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        
        unordered_map<int, int>m;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second == 1){
                sum += it->first;
            }
        }
        
        return sum;
    }
};