class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int> mp;
        for(auto &x:nums){
            mp[x]++;
        }
        int prepre=0, pre=0, now=0, preelem=-100;

        for(auto &x:mp){
            if(preelem == x.first-1){
                now = prepre + x.first * x.second;
            }else {
                now = pre + x.first*x.second;
            }

            prepre = pre;
            pre = max(pre,now);
            preelem = x.first;
        }

        return max(pre, prepre);
    }
};